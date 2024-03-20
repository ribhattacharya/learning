#include <iostream>
#include <sstream>
#include <string>
#include <memory>

class ILibrary
{
public:
    virtual ~ILibrary() {}
    virtual void configure() = 0;
    virtual std::string createSendString(const std::string &message) = 0;
    virtual std::string createReadString(const std::string &message) = 0;
};

class OldLibrary : public ILibrary
{
public:
    void configure() override
    {
        std::cout << "configureOldPeripheralDevice()" << std::endl;
    }
    std::string createSendString(const std::string &message) override { return "<" + message + ">"; }
    std::string createReadString(const std::string &message) override
    {
        return message.substr(2, message.size() - 4);
    }
};

class PreviousLibrary : public ILibrary
{
public:
    void configure() override
    {
        std::cout << "configurePreviousPeripheralDevice()" << std::endl;
    }
    std::string createSendString(const std::string &message) override { return "[" + message + "]"; }
    std::string createReadString(const std::string &message) override
    {
        return message.substr(1, message.size() - 3);
    }
};

class CurrentLibrary : public ILibrary
{
public:
    void configure() override
    {
        std::cout << "configureCurrentPeripheralDevice()" << std::endl;
    }
    std::string createSendString(const std::string &message) override { return "{" + message + "}"; }
    std::string createReadString(const std::string &message) override
    {
        return message.substr(1, message.size() - 2);
    }
};

class LibraryBuilder
{
public:
    static std::unique_ptr<ILibrary> FromProtocolVersion(int protocolVersion)
    {
        if (protocolVersion < 2)
            return std::make_unique<OldLibrary>();
        else if (protocolVersion < 5)
            return std::make_unique<PreviousLibrary>();
        else
            return std::make_unique<CurrentLibrary>();
    }
};

class SerialPort
{
public:
    SerialPort(std::unique_ptr<ILibrary> library): _library(std::move(library)) {}

    void send(std::string message)
    {
        message = _library->createSendString(message);
        _library->configure();

        // Some common functionality
        message = "--" + message + "--";
        std::cout << "Sending message: " << message << std::endl;
    }

    std::string read()
    {
        // Some common functionality
        std::string message;
        std::cin >> message;
        if (message.empty())
            return "EMPTY";

        message = _library->createReadString(message);

        // Some common functionality
        message = "++" + message + "++";
        return message;
    }

private:
    std::unique_ptr<ILibrary> _library;
};

int run_lab()
{
    // Redirect cout to a buffer, so we can check the output
    std::stringstream output;
    auto old_output = std::cout.rdbuf(output.rdbuf());
    std::stringstream input;
    auto old_input = std::cin.rdbuf(input.rdbuf());

    const int protocolVersion = 1;
    std::unique_ptr<ILibrary> library = LibraryBuilder::FromProtocolVersion(protocolVersion);
    SerialPort oldDeviceSerialPort(std::move(library));
    oldDeviceSerialPort.send("Hello");

    const std::string expectedOutput("configureOldPeripheralDevice()\n"
                                     "Sending message: --<Hello>--\n");
    const std::string actualOutput(output.str());

    if (actualOutput != expectedOutput)
    {
        std::cerr << "Expected: " << expectedOutput << std::endl;
        std::cerr << "Actual: " << actualOutput << std::endl;
        return 1;
    }
    std::cout.rdbuf(old_output); // Restore cout

    input.str("!!Howdy%%");
    const std::string receivedMessage(oldDeviceSerialPort.read());
    const std::string expectedMessage("++Howdy++");
    std::cin.rdbuf(old_input); // Restore cin

    if (receivedMessage != expectedMessage)
    {
        std::cerr << "Expected: " << expectedMessage << std::endl;
        std::cerr << "Actual: " << receivedMessage << std::endl;
        return 1;
    }
    std::cout << "OK" << std::endl;

    return 0;
}

int main()
{
    return run_lab();
}

#include <iostream>
#include <sstream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class IPort
{
public:
    virtual ~IPort() {}
    virtual void open() = 0;
    virtual void close() = 0;
    virtual void write(const string &message) = 0;
};

class SerialPort : public IPort
{
public:
    SerialPort() { open(); }
    ~SerialPort() { close(); }

    void open() override { cout << "serial_port::open()" << endl; }
    void close() override { cout << "serial_port::close()" << endl; }
    void write(const string &message) override { cout << message; }
};

class Sensor
{
public:
    Sensor(IPort *p) : port(p) {}
    virtual ~Sensor() {}

    void sendMsg(const string &command)
    {
        port->write(createMsg(command));
    }

private:
    IPort *port;
    virtual string createMsg(const string &command) = 0;
};

class FSC300 : public Sensor
{
public:
    FSC300(IPort *port) : Sensor(port) {}

    virtual string createMsg(const string &command) override
    {
        return "FSC300:" + std::to_string(command.size()) + ":" + command + "\n";
    }
};

class PowerManager
{
public:
    PowerManager(Sensor *s) : sensor(s) {}
    ~PowerManager() {}
    void power_on() { sensor->sendMsg("power_on"); }
    void power_off() { sensor->sendMsg("power_off"); }

private:
    Sensor *sensor;
};

int main()
{
    // Redirect cout to a buffer, so we can check the output
    std::stringstream buffer{};
    auto old_output = cout.rdbuf(buffer.rdbuf());

    {
        SerialPort serialPort;
        FSC300 fsc300(&serialPort);
        PowerManager pm(&fsc300);
        pm.power_on();
        pm.power_off();
    }

    string expected{"serial_port::open()\n"
                    "FSC300:8:power_on\n"
                    "FSC300:9:power_off\n"
                    "serial_port::close()\n"};
    string actual{buffer.str()};
    cout.rdbuf(old_output); // Restore cout

    if (expected != actual)
    {
        cerr << "Expected: " << expected << endl;
        cerr << "Actual: " << actual << endl;
        return 1;
    }
    cout << "OK" << endl;

    return 0;
}

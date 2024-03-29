# Effective C++ - Scott Meyers <!-- omit from toc -->
[Book link](https://github.com/ivanarandac/Books/blob/master/Effective%20C%2B%2B%203rd%20ed.pdf)

- [Chapter 1: Accustoming Yourself to C++](#chapter-1-accustoming-yourself-to-c)
  - [Item 1: View C++ as a federation of languages.](#item-1-view-c-as-a-federation-of-languages)
  - [Item 2: Prefer `consts`, `enums`, and `inlines` to `#defines`.](#item-2-prefer-consts-enums-and-inlines-to-defines)
  - [Item 3: Use `const` whenever possible](#item-3-use-const-whenever-possible)
  - [Item 4: Make sure that objects are initialized before they’re used.](#item-4-make-sure-that-objects-are-initialized-before-theyre-used)
- [Chapter 2: Constructors, Destructors, and Assignment Operators](#chapter-2-constructors-destructors-and-assignment-operators)
  - [Item 5: Know what functions C++ silently writes and calls.](#item-5-know-what-functions-c-silently-writes-and-calls)
  - [Item 6: Explicitly disallow the use of compiler-generated functions you do not want.](#item-6-explicitly-disallow-the-use-of-compiler-generated-functions-you-do-not-want)
  - [Item 7: Declare destructors virtual in polymorphic base classes.](#item-7-declare-destructors-virtual-in-polymorphic-base-classes)
  - [Item 8: Prevent exceptions from leaving destructors.](#item-8-prevent-exceptions-from-leaving-destructors)
  - [Item 9: Never call virtual functions during construction or destruction.](#item-9-never-call-virtual-functions-during-construction-or-destruction)
  - [Item 10: Have assignment operators return a reference to this.](#item-10-have-assignment-operators-return-a-reference-to-this)
  - [Item 11: Handle assignment to self in `operator=`.](#item-11-handle-assignment-to-self-in-operator)
  - [Item 12: Copy all parts of an object.](#item-12-copy-all-parts-of-an-object)
- [Chapter 3: Resource Management](#chapter-3-resource-management)
  - [Item 13: Use objects to manage resources.](#item-13-use-objects-to-manage-resources)
  - [Item 14: Think carefully about copying behavior in resource-managing classes.](#item-14-think-carefully-about-copying-behavior-in-resource-managing-classes)
  - [Item 15: Provide access to raw resources in resource-managing classes.](#item-15-provide-access-to-raw-resources-in-resource-managing-classes)
  - [Item 16: Use the same form in corresponding uses of new and delete.](#item-16-use-the-same-form-in-corresponding-uses-of-new-and-delete)
  - [Item 17: Store newed objects in smart pointers in standalone statements.](#item-17-store-newed-objects-in-smart-pointers-in-standalone-statements)
- [Chapter 4: Designs and Declarations](#chapter-4-designs-and-declarations)
  - [Item 18: Make interfaces easy to use correctly and hard to use incorrectly.](#item-18-make-interfaces-easy-to-use-correctly-and-hard-to-use-incorrectly)
  - [Item 19: Treat class design as type design.](#item-19-treat-class-design-as-type-design)
  - [Item 20: Prefer pass-by-reference-to-const to pass-by-value.](#item-20-prefer-pass-by-reference-to-const-to-pass-by-value)
  - [Item 21: Don’t try to return a reference when you must return an object.](#item-21-dont-try-to-return-a-reference-when-you-must-return-an-object)
  - [Item 22: Declare data members private.](#item-22-declare-data-members-private)
  - [Item 23: Prefer non-member non-friend functions to member functions.](#item-23-prefer-non-member-non-friend-functions-to-member-functions)
  - [Item 24: Declare non-member functions when type conversions should apply to all parameters.](#item-24-declare-non-member-functions-when-type-conversions-should-apply-to-all-parameters)
  - [Item 25: Consider support for a non-throwing swap.](#item-25-consider-support-for-a-non-throwing-swap)
- [Chapter 5: Implementations](#chapter-5-implementations)
  - [Item 26: Postpone variable definitions as long as possible.](#item-26-postpone-variable-definitions-as-long-as-possible)
  - [Item 27: Minimize casting.](#item-27-minimize-casting)
  - [Item 28: Avoid returning “handles” to object internals.](#item-28-avoid-returning-handles-to-object-internals)
  - [Item 29: Strive for exception-safe code.](#item-29-strive-for-exception-safe-code)
  - [Item 30: Understand the ins and outs of inlining.](#item-30-understand-the-ins-and-outs-of-inlining)
  - [Item 31: Minimize compilation dependencies between files.](#item-31-minimize-compilation-dependencies-between-files)
- [Chapter 6: Inheritance and Object-Oriented Design](#chapter-6-inheritance-and-object-oriented-design)
  - [Item 32: Make sure public inheritance models “is-a.”](#item-32-make-sure-public-inheritance-models-is-a)
  - [Item 33: Avoid hiding inherited names.](#item-33-avoid-hiding-inherited-names)
  - [Item 34: Differentiate between inheritance of interface and inheritance of implementation.](#item-34-differentiate-between-inheritance-of-interface-and-inheritance-of-implementation)
  - [Item 35: Consider alternatives to virtual functions.](#item-35-consider-alternatives-to-virtual-functions)
  - [Item 36: Never redefine an inherited non-virtual function.](#item-36-never-redefine-an-inherited-non-virtual-function)


## Chapter 1: Accustoming Yourself to C++
### Item 1: View C++ as a federation of languages.
### Item 2: Prefer `consts`, `enums`, and `inlines` to `#defines`.
### Item 3: Use `const` whenever possible
### Item 4: Make sure that objects are initialized before they’re used.

## Chapter 2: Constructors, Destructors, and Assignment Operators
### Item 5: Know what functions C++ silently writes and calls.
### Item 6: Explicitly disallow the use of compiler-generated functions you do not want.
### Item 7: Declare destructors virtual in polymorphic base classes.
### Item 8: Prevent exceptions from leaving destructors.
### Item 9: Never call virtual functions during construction or destruction.
### Item 10: Have assignment operators return a reference to this.
### Item 11: Handle assignment to self in `operator=`.
### Item 12: Copy all parts of an object.

## Chapter 3: Resource Management
### Item 13: Use objects to manage resources.
### Item 14: Think carefully about copying behavior in resource-managing classes.
### Item 15: Provide access to raw resources in resource-managing classes.
### Item 16: Use the same form in corresponding uses of new and delete.
### Item 17: Store newed objects in smart pointers in standalone statements.

## Chapter 4: Designs and Declarations
### Item 18: Make interfaces easy to use correctly and hard to use incorrectly.
### Item 19: Treat class design as type design.
### Item 20: Prefer pass-by-reference-to-const to pass-by-value.
### Item 21: Don’t try to return a reference when you must return an object.
### Item 22: Declare data members private.
### Item 23: Prefer non-member non-friend functions to member functions.
### Item 24: Declare non-member functions when type conversions should apply to all parameters.
### Item 25: Consider support for a non-throwing swap.

## Chapter 5: Implementations
### Item 26: Postpone variable definitions as long as possible.
### Item 27: Minimize casting.
### Item 28: Avoid returning “handles” to object internals.
### Item 29: Strive for exception-safe code.
### Item 30: Understand the ins and outs of inlining.
### Item 31: Minimize compilation dependencies between files.

## Chapter 6: Inheritance and Object-Oriented Design
### Item 32: Make sure public inheritance models “is-a.”
- Always check if `Derived` is-a `Base` object.
- `Derived` should inherit **all** of the `Base` qualities.
- If some methods in `Base` are to be omitted/errored out in `Derived`, this means the inheritance needs to be rechecked.

Things to remember,
1. Public inheritance means “is-a.” Everything that applies to base classes must also apply to derived classes because every derived class object is a base class object.
### Item 33: Avoid hiding inherited names.
Things to remember,
1. Names in derived classes hide names in base classes. Under public inheritance, this is never desirable.
2. To make hidden names visible again, employ `using` declarations or forwarding functions.
### Item 34: Differentiate between inheritance of interface and inheritance of implementation.
Things to remember,
1. Inheritance of interface is different from inheritance of implementation. Under public inheritance, derived classes always inherit base class interfaces.
2. Pure virtual functions specify inheritance of interface only.
3. Simple (impure) virtual functions specify inheritance of interface plus inheritance of a default implementation.
  - However in case the default implementation is wrong for a derived class, forgetting to `override` it might be an issue.
  - So need implement mechanics to call default implementation *only* when the client *asks* for it.
    - `public virtual` (pure virtual) interface and `protected` default implementation. The pure `virtual` ensures an implementation *needs* to be provided, while the `protected` means the class can still call the default implementation if required, without it being visible outside the class.
    - Another way is to define the implementation of the pure `virtual` interface of the base class as well, and call it if required in the derived classes. 
      - Pro: Cleaner code. 
      - Con: Only a single protection level. Since interface is public, the default implementation is also public.
4. Non-virtual functions specify inheritance of interface plus inheritance of a mandatory implementation.
### Item 35: Consider alternatives to virtual functions.
The fundamental advice of this Item is to consider alternatives to virtual functions when searching for a design for the problem you’re trying to solve. Here’s a quick recap of the alternatives we examined:
- Use the non-virtual interface idiom (NVI idiom), a form of the Template Method design pattern that wraps public non-virtual member functions around less accessible virtual functions.
- Replace virtual functions with function pointer data members, a stripped-down manifestation of the Strategy design pattern.
- Replace virtual functions with tr1::function data members, thus allowing use of any callable entity with a signature compatible with what you need. This, too, is a form of the Strategy design pattern.
- Replace virtual functions in one hierarchy with virtual functions in another hierarchy. This is the conventional implementation of the Strategy design pattern.

Things to remember,
1. Alternatives to `virtual` functions include the NVI idiom and various forms of the Strategy design pattern. The NVI idiom is itself an example of the Template Method design pattern.
2. A disadvantage of moving functionality from a member function to a function outside the class is that the nonmember function lacks access to the class’s non-public members.
3. `tr1::function` objects act like generalized function pointers. Such objects support all callable entities compatible with a given target signature.
### Item 36: Never redefine an inherited non-virtual function.

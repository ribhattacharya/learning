# Clean Code <!-- omit in toc -->
[Udemy Clean Code for C# developers](https://udemy.com/course/clean-code/)

- [1. Common Code smells](#1-common-code-smells)
  - [1.1. Poor names](#11-poor-names)
  - [1.2. Poor naming conventions](#12-poor-naming-conventions)
  - [1.3. Poor method signatures](#13-poor-method-signatures)
  - [1.4. Long parameter list](#14-long-parameter-list)
  - [1.5. Output parameters](#15-output-parameters)
  - [1.6. Variable declarations on the top](#16-variable-declarations-on-the-top)
  - [1.7. Magic numbers](#17-magic-numbers)
  - [1.8. Nested conditionals](#18-nested-conditionals)
  - [1.9. Switch statements](#19-switch-statements)
  - [1.10. Code duplication](#110-code-duplication)
  - [1.11. Comments](#111-comments)
  - [1.12. Long methods](#112-long-methods)

# 1. Common Code smells
## 1.1. Poor names
- Not too short, not too long
- Meaningful
- Reveal intention
- Chosen from problem domain

## 1.2. Poor naming conventions
- Class names, properties, methods: **`PascalCase`**
- Private fields, method arguments and variables: **`camelCase`**

## 1.3. Poor method signatures
- Try to avoid boolean flags inside methods; usually means the method is doing 2 things. Better to bifurcate into two methods.
- Method signatures should have intention revealing
  - return types
  - method name
  - parameters

## 1.4. Long parameter list
- Limit no. of parameters to 3
- Any more, and try to encapsulate the parameters into a class/container.

## 1.5. Output parameters
- Avoid `ref`, `out`
- Return an object from the method instead of trying to return multiple things 

## 1.6. Variable declarations on the top
- Was done long ago due to technical reasons, no need to do that now. 
- Move declarations close to their usage.
- Avoid unnecessary initializations.

## 1.7. Magic numbers
- `if (status == 1)`, here `1` is a magic number; don't know what that means.
- Use enums (recommended), context defining constants, properties, etc. 

## 1.8. Nested conditionals
- Use ternary operator
  - Refactor a simple `if-else` into a ternary statement.
  - However, do not nest ternary statement; becomes very messy.
- Simplify true/false into a single statement
- Combine conditionals
- Early exit
- Swap orders
  
Oftentimes can combine two or more techniques from above. However, everything in moderation.

## 1.9. Switch statements
- Needs to be modified everytime a new case is added; can get lengthy pretty quickly
- Might lead to a lot of chain-compilations across the project
- Can be generally avoided using polymorphism
  - Push member function down to the derived classes for override 
  
## 1.10. Code duplication
- DRY: Don't Repeat Yourself
- Extract duplicated code into functions

## 1.11. Comments
- Can easily create unnecessary noise in the code
- Code should be self-explanatory
- Comments should explain the *why* and *how*, not the *what*

## 1.12. Long methods
- Ideally should be <= 10 lines of code
- Should do only one thing 
- Any more means the method is doing a lot more, should be split up
- Same goes for methods inside a class (class should ideally be small) 

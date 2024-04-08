# SOLID Udemy Course <!-- omit in toc -->

[COURSE LINK](https://www.udemy.com/share/10awQo3@6mk0CMVuL2n_Ez3laiXifjgN0usElR4Xf7V1zwOb7fe_J0aR0-N4LgipzzUMdaH9Pg==/)

- [1. Single responsibility principle](#1-single-responsibility-principle)
- [2. Open/closed principle](#2-openclosed-principle)
- [3. Liskov substitution principle](#3-liskov-substitution-principle)
- [4. Interface segregation principle](#4-interface-segregation-principle)

## 1. Single responsibility principle
1. Class should have only 1 reason to change
2. Help maintainability
   - Modules remain focused
   - Impact of changes is limited
3. Reusability
   - Smaller modules

## 2. Open/closed principle
1. Open for extension, closed for modification
2. Add new functionality without changing existing code
3. Hide info behind abstract interfaces instead of differentiating logic inside a class (take advantage of dynamic dispatch instead of switch statements/if conditions).
4. Help maintainability
   - Modules remain focused
   - Impact of changes is limited
5. Reusability
   - Smaller modules
  
## 3. Liskov substitution principle
1. Subclass should satisfy not only the syntactic but also the behavioural expectations of its parent. 
2. Behaviour of all children of a class should be consistent.
   1. Do not force relationships.
   2. Ensure consistency of inputs and outputs.
   3. Avoid functions that reveal the type of the child.

## 4. Interface segregation principle
1. No class should inherit methods they do not use.
2. Multiple single purpose interfaces are better than one.
   1. Helps in lower coupling.
   2. Smaller interfaces are easier to implement and port.

| **Single responsibility**                                          	| **Interface segregation**                                       	|
|--------------------------------------------------------------------	|-----------------------------------------------------------------	|
| Responsibility:<br>What the module has control over.               	| Purpose:<br>What the module is used for.                        	|
| Inwards:<br>Look inwards, is the module too focused?               	| Outwards: <br>Look outwards, does the module expose too much?   	|
| Implementation:<br>May be cohesive and satisfy multiple use cases. 	| Interface: <br>Should be minimal and satisfy a single use case. 	|


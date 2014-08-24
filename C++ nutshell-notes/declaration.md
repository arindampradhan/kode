###Definitions
A definition defines the storage, value, body, or contents of a declaration.


###Declaration
declaration tells you an entity’s name and the external view of the entity, such as an object’s type or a
function’s parameters.



###One Definition Rules(ODR)
* Before you can use an entity (function or referring to an object), the compiler needs the entity’s declaration,
but not necessarily its definition.

* The convention is to place the declarations for classes, functions, and global objects in a header file (whose name
typically ends with .h or .hpp).

* You can force the compiler to interpret the declaration as an object definition by enclosing
one or more arguments in parentheses.

###Scope
A scope is a region of source code that contains declarations. Every declaration
adds a name to a scope, and every use of a name requires the compiler to identify
which scope contains that name’s declaration. Sometimes you tell the compiler
exactly which scope contains the name, and at other times the compiler determines the scope.


The binary scope resolution operator (also :: ) requires a namespace or class name
as its lefthand operand, and an identifier as its righthand operand. The identifier
is looked up in the scope of the lefthand namespace or class.


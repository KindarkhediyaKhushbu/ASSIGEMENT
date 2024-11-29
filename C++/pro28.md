###  What is the scope of variables in C++? Differentiate between local and global scope.


<b>The scope of a variable in C++ is the part of a program where the variable can be used:</b>

### 1.Global variables
- These variables are valid from the point they are declared to the end of the program and can be used anywhere in the program.
### 2. Local variables
- These variables are limited to the block of code where they are declared and cannot be accessed outside that block. A block is a section of code enclosed in curly braces. 

| Local scope | Global scope |
| --- | --- |
Global variables are declared outside all the function blocks. |Local Variables are declared within a function block.
The scope remains throughout the program. |The scope is limited and remains within the function only in which they are declared.
Any change in global variable affects the whole program, wherever it is being used. |Any change in the local variable does not affect other functions of the program.
It can be accessed throughout the program by all the functions present in the program.|It can only be accessed by the function statements in which it is declared and not by the other functions.
If the global variable is not initialized, it takes zero by default.| If the local variable is not initialized, it takes the garbage value by default.
Global variables are stored in the data segment of memory. | Local variables are stored in a stack in memory





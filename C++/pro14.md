<b><h1>What are the different types of operators in C++? Provide examples of each.</b></h1>

<b> 1. Arithmetic Operators : </b>These operators perform basic arithmetic operations.

- +: Addition
- -: Subtraction
- *: Multiplication
- /: Division
- %: Modulo (remainder after division)

<b>***Example :
```c 
int a = 10, b = 5;
int sum = a + b;      
int diff = a - b;     
int product = a * b;  
int quotient = a / b; 
int remainder = a % b;
```
2. Relational (Comparison) Operators :</b>These operators are used to compare two values.

- == (Equal to)
- != (Not equal to)
- > (Greater than)
- < (Less than)
-  >= (Greater than or equal to)
- <= (Less than or equal to)

<b>***Example: </b>

```C
int a = 10, b = 5;
bool result1 = (a == b); // false
bool result2 = (a != b); // true
bool result3 = (a > b);  // true
bool result4 = (a < b);  // false
```

<b> 3. Logical Operators :</b>These operators are used to perform logical operations on Boolean values.

- && (Logical AND)
- || (Logical OR)
- ! (Logical NOT)

<b>***Example :</b>
```c
bool x = true, y = false;
bool result1 = (x && y); // false
bool result2 = (x || y); // true
bool result3 = !x;       // false
```

<b>4. Bitwise Operators :</b>These operators perform operations on the binary representations of integers.

- & (Bitwise AND)
- | (Bitwise OR)
- ^ (Bitwise XOR)
- ~ (Bitwise NOT)
- << (Left shift)
- >> (Right shift)

```c
int a = 5, b = 3;  // binary: a = 0101, b = 0011
int and_result = a & b; // result = 1 (binary: 0001)
int or_result = a | b;  // result = 7 (binary: 0111)
int xor_result = a ^ b; // result = 6 (binary: 0110)
int not_result = ~a;    // result = -6 (binary: 1010)
int shift_left = a << 1; // result = 10 (binary: 1010)
int shift_right = a >> 1; // result = 2 (binary: 0010)
```

<b>5. Assignment Operators :</b>These operators are used to assign values to variables.

- = (Simple assignment)
- += (Add and assign)
- -= (Subtract and assign)
- *= (Multiply and assign)
- /= (Divide and assign)
- %= (Modulus and assign)
- &= (Bitwise AND and assign)
- |= (Bitwise OR and assign)
- ^= (Bitwise XOR and assign)
- <<= (Left shift and assign)
- >>= (Right shift and assign)

<b>***Example:</b>

```c
int a = 10;
a += 5;  // a = 15
a -= 3;  // a = 12
a *= 2;  // a = 24
a /= 4;  // a = 6
a %= 5;  // a = 1
```

<b>6. Increment and Decrement Operators :</b>These operators are used to increase or decrease the value of a variable by 1

- ++ (Increment)
- -- (Decrement)

<b>***Example :</b>

```c
int a = 10;
a++; // a = 11 (post-increment)
++a; // a = 12 (pre-increment)
a--; // a = 11 (post-decrement)
--a; // a = 10 (pre-decrement)
```

<b>7. Conditional (Ternary) Operator :</b> This is a shorthand for an if-else statement.

- ? : (Conditional operator)

<b>Example:</b>

```c
Copy code
int a = 10, b = 5;
int result = (a > b) ? a : b; // result = 10 (if a > b, use a, else use b)
```

<b>What are conditional statements in C++? Explain the if-else and switch statements.
</b>


- In C++, conditional statements are used to perform different actions based on certain conditions

<b>1. if-else Statement :</b>
The if-else statement is the most basic conditional statement in C++. It allows you to execute a block of code if a condition is true and execute a different block of code if the condition is false.

<b>Syntax:</b>
```c
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}
```
- The condition is an expression that evaluates to either true or false.
- If the condition is true, the code inside the first block (after if) is executed.
- If the condition is false, the code inside the else block is executed.

<b>2. switch Statement :</b>

- The switch statement allows you to choose between multiple conditions based on the value of an expression. It's a more concise way to write multiple if-else if statements when you have several potential values to compare against.

<b>Syntax:</b>
```c
switch (expression) {
    case value1:
        // Code to execute if expression == value1
        break;
    case value2:
        // Code to execute if expression == value2
        break;
    case value3:
        // Code to execute if expression == value3
        break;
    default:
        // Code to execute if expression doesn't match any case
}
```
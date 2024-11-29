<b> What is the difference between for, while, and do-while loops in C++?</b>

| Feature      | for Loop	       |while Loop	|do-while Loop|
| -------- | ---------- | --------| --------|
|Syntax|for (initialization; condition; increment/decrement) {}|while (condition) { }|do { } while (condition);|
|Initialization|Declared within the loop structure and executed once at the beginning.|Declared outside the loop; should be done explicitly before the loop.|Declared outside the loop structure|
|Condition|Checked before each iteration.|Checked before each iteration.|Checked after each iteration.|
|Update|Executed after each iteration.|Executed inside the loop; needs to be handled explicitly.|Executed inside the loop; needs to be handled explicitly.|
|Use Cases|Suitable for a known number of iterations or when looping over ranges.|Useful when the number of iterations is not known in advance or based on a condition.|Useful when the loop block must be executed at least once, regardless of the initial condition|
|Initialization and Update Scope|Limited to the loop body.|Scope extends beyond the loop; needs to be handled explicitly|Scope extends beyond the loop; needs to be handled explicitly.|
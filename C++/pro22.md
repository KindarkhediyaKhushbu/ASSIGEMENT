<b>*How are break and continue statements used in loops? Provide examples.
</b>

- The break and continue statements are commonly used within loops to control the flow of execution..

<b>1. break statement:</b>

- The break statement is used to exit a loop early, based on a specific condition. Once break is encountered, the loop is immediately terminated, and the program moves on to the first statement after the loop.

###  Example :

```c
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int target = 30;  // Value to find in the list

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == target) {
            std::cout << "Found " << target << " at index " << i << ". Exiting loop.\n";
            break;  // Exit the loop when the target is found
        }
        std::cout << "Checking number: " << numbers[i] << std::endl;
    }

    return 0;
}
```


<b> 2. continue statement:</b>

- The continue statement is used to skip the current iteration of the loop and proceed with the next iteration. It is often used when a certain condition is met, and you want to skip the remaining code for that iteration, but still continue the loop.

### Example :

```c
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 == 0) {
            continue;  // Skip even numbers
        }
        std::cout << "Odd number: " << numbers[i] << std::endl;
    }

    return 0;
}
```

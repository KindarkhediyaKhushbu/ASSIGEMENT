 <b>4. What are the main input/output operations in C++? Provide examples.</b>

<b>1.Input Stream:</b> 

- If the direction of flow of bytes is from the device(for example, Keyboard) to the main memory then this process is called input.
-  C++, cin takes formatted input from standard input devices such as the keyboard. We use the cin object along with the >> operator for taking input.


```c
 *Example
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;   
    cout << "The number is: " << num;
    return 0;
}
```

<b>2.Output Stream:</b> 

-  If the direction of flow of bytes is opposite, i.e. from main memory to device( display screen ) then this process is called output.
- We first include the iostream header file that allows us to display output.


```c
 * Exemple
#include <iostream>
using namespace std;

int main() {
    cout << "This is C++ Programming";
    return 0;
}
```
### What are the different data types available in C++? Explain with examples. </b></h1>

<b> * C++ supports the following data types:

 1.Primary or Built-in or Fundamental data type :</b>These data types are built-in or predefined data types and can be used directly by the user to declare variables. example: int, char, float, bool, etc. Primitive data types available in C++ are: 

- Integer

    ```c
       int age = 25; 
    ```
- Character
    ```c
    char grade = 'A';
    ```
- Boolean
    ```c
    bool isActive = true;
    ```
- Float
    ```c
    float weight = 65.5f; 
    ```
- Double 
    ```c
    double contect_no=9756786502;
    ```
-  Void
    ```c
    void displayMessage() {
    std::cout << "Hello, world!";
}
    ```



<b> 2.Derived data types : </b>Derived data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types. These can be of four types namely:

- Function
    ```c
    void greet() {
    cout << "Hello World";
    }
    ```
- Array :
    ```c
    int numbers[] = {1, 2, 3, 4, 5};
    ```
- Pointer :
    ```c
    int num = 10;
    int* ptr = &num; 
    ```


<b> 3.User-defined data types :</b> Abstract or User-Defined data types are defined by the user itself. Like, defining a class in C++ or a structure. C++ provides the following user-defined datatypes

- Class :
    ```c
    class Student {
    public:
    string name;
    int rollNo;
    
    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo;
    }
    };
    ```
- Structure :
    ```c
    struct Person {
    string name;
    int age;
    };

   Person p1 = {"John", 30};
    ```





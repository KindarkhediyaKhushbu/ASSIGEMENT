### What is inheritance in C++? Explain with an example

<b>Inheritance in C++ </b>
- Inheritance is one of the core concepts of Object-Oriented Programming (OOP), allowing a new class (called a derived class) to inherit attributes and behaviors (member variables and functions) from an existing class (called a base class). The derived class can also add new features or modify the inherited ones.


<b>Types of Inheritance in C++: </b>
- Single Inheritance: A derived class inherits from a single base class.
- Multiple Inheritance: A derived class inherits from more than one base class.
- Multilevel Inheritance: A class inherits from another class, which is itself derived from another class.
- Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
- Hybrid Inheritance: A combination of two or more 
private inheritance: Public and protected members of the base class become private in the derived class.
### Example :
```c
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Base class constructor
    Animal(string n) {
        name = n;
    }

    // A method of the base class
    void eat() {
        cout << name << " is eating." << endl;
    }

    void sleep() {
        cout << name << " is sleeping." << endl;
    }

protected:
    string name;  // Protected member (can be accessed by derived classes)
};

// Derived class
class Dog : public Animal {  // Public inheritance from Animal
public:
    // Constructor of derived class
    Dog(string n, string b) : Animal(n) {
        breed = b;
    }

    // A method of the derived class
    void bark() {
        cout << name << " says Woof!" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Breed: " << breed << endl;
    }

private:
    string breed;  // New data member specific to Dog
};

int main() {
    // Creating an object of the derived class Dog
    Dog dog1("Buddy", "Golden Retriever");

    // Accessing the base class method
    dog1.eat();
    dog1.sleep();

    // Accessing the derived class method
    dog1.bark();
    dog1.display();

    return 0;
}
```
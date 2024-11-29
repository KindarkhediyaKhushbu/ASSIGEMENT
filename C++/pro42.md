### What are classes and objects in C++? Provide an example.

<b>Classes in C++ :</b>
- A class in C++ is a blueprint or template for creating objects. It defines a data structure and the methods (functions) that operate on the data.
- A class defines the properties and behavior of the objects created from it. The class itself does not consume memory; memory is allocated only when an object of the class is instantiated.

<b>Objects in C++ :</b>
- An object is an instance of a class. When an object is created, memory is allocated to store the data members, and the methods defined in the class can be invoked using the object.

<b>Example of Class and Object in C++ :</b>
```c
    #include <iostream>
    using namespace std;

    // Define a class named 'Car'
    class Car {
    public:
        // Data members (attributes)
        string brand;
        string model;
        int year;

    // Constructor to initialize the object
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // Member function to display the car details
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

 int main() {
    // Create an object of the class Car
    Car car1("Toyota", "Corolla", 2020);
    Car car2("Honda", "Civic", 2021);

    // Call the member function using the object
    car1.displayDetails();
    car2.displayDetails();

    return 0;
}
```


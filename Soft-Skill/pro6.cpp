// Write a C++ program to implement a class called Circle that has private member variables for radius.
//  Include member functions to calculate the circle's area and circumference.

#include <iostream>

#include <cmath> 

const double PI = 3.14159;

class Circle { 
  private: 
    double radius; 

  public:
    // Constructor to initialize the Circle object with a radius
    Circle(double rad): radius(rad) {}

    // Member function to calculate the area of the circle
    double calculateArea() {
      return PI * pow(radius, 2); // Formula to calculate the area of a circle
    }

    // Member function to calculate the circumference of the circle
    double calculateCircumference() {
      return 2 * PI * radius; // Formula to calculate the circumference of a circle
    }
};

int main() {
  // Create a circle object
  double radius;
  std::cout << "Input the radius of the circle: ";
  std::cin >> radius;
  Circle circle(radius); 

  // Calculate and display the area of the circle
  double area = circle.calculateArea(); 
  std::cout << "Area: " << area << std::endl; 

  // Calculate and display the circumference of the circle
  double circumference = circle.calculateCircumference(); 
  std::cout << "Circumference: " << circumference << std::endl; 

  return 0; 
}


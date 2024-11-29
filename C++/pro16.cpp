/*Write a C++ program that takes a student’s marks as input and calculates the grade
based on if-else condition*/

#include<iostream>

using namespace std;
 int main()
 {

    float mark;

    cout << " Enter the student mark(1-100) : " ;
    cin >> mark;

    if (mark >= 90 && mark <= 100)
    {
        cout << "grade : A ";
    }
    if (mark >= 80 && mark < 90)
    {
        cout << "grade : B ";
    }
    if (mark >= 70 && mark < 80)
    {
        cout << "grade : C ";
    }
    if (mark >= 60 && mark < 70)
    {
        cout << "grade : D";
    }
    if (mark >= 50 && mark < 60)
    {
        cout << "grade : E";
    }
    if (mark >= 40 && mark < 50)
    {
        cout << "grade : F";
    }
    if (mark >= 45 && mark < 40)
    {
        cout << "grade : G";
    }
    else if (mark >= 0 && mark < 45)
    {
        cout << "FAIL ";
    }
    
    
    return 0;

 }
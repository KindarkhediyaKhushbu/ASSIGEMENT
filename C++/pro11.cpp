/* Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
operators. Perform operations using each type of operator and display the results.*/

#include<iostream>

using namespace std;

int main()
{
    //Arithmetic operator
    int a = 10,b = 5;
    cout << "Arithmetic Operator:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;


    //relational operator
    cout << "Relational Operator:" << endl;
    cout << "a == b:" << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a < b = " << (a > b) << endl;
    

    //logical operator
    bool x = true,y = false;
    cout << "\n Logical Operator :" << endl;
    cout << "x && y :" << (x && y) <<endl;
    cout << "x || y : "  << (x || y)<<endl;


    //Bitwise Operator
    int c = 6, d = 4; // 6 = 0110, 4 = 0100 in binary
    cout << "\nBitwise Operators:" << endl;
    cout << "c & d: " << (c & d) << endl; // Bitwise AND
    cout << "c | d: " << (c | d) << endl; // Bitwise OR
    cout << "c ^ d: " << (c ^ d) << endl; // Bitwise XOR
    cout << "~c: " << (~c) << endl;       // Bitwise NOT
    cout << "c << 1: " << (c << 1) << endl; // Left shift
    cout << "c >> 1: " << (c >> 1) << endl; // Right shift

    

    return 0;
}
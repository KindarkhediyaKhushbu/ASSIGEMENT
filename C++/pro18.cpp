/*Write a C++ program to display the multiplication table of a given number using a for
loop.*/

#include<iostream>


using namespace std;

int main()
{

    int number;

    cout << "Enter the number : ";
    cin >> number;

    for (int i = 1; i <= 10; i++)
    {
        cout << number << " * " << i << " = "  << number * i<< endl;
    }
    

    return 0;

}
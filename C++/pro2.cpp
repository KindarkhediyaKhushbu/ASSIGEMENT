//Write a C++ program that accepts user input for their name and age and then
//displays a personalized greeting.

#include<iostream>
#include<string>


using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name:" << endl;
    cin >>name;

    cout << "Enter your age:" << endl;
    cin >>age;

    cout << name <<"!" << endl;
    cout << age <<"age" <<endl;
}

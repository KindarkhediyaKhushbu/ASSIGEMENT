/* Write a program that prints a right-angled triangle using stars (*) with a nested loop.*/

#include<iostream>

using namespace std;

int main()
{

     for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        { 
            cout << " * ";
        }        
        cout << endl;
    }

    return 0;
}
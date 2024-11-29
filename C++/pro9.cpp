// Write a C++ program that demonstrates the use of variables and constants. Create
// variables of different data types and perform operations on them.


#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    //constants
    const double PI = 3.1415;
    //variable of diffrenet type
    int num1=10;
    int num2=5;
    float floatnum=3.14f;
    double dnum=2.7182;
    char grade ='B';

    //int operation
    int sum = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    int division = num1 / num2;

    float floatsum = floatnum+1.0f;
    double dprodust = dnum*3.0;

    double sqrtresult = sqrt(dnum);

    cout<<"Integer operation :" <<endl;
    cout<<"sum :"<<sum<<endl;
    cout<<"subtraction" <<subtraction <<endl;
    cout<<"multiplication" <<multiplication <<endl;
    cout<<"division" <<division <<endl;

    cout<<"\n floating point operation:" <<endl;
    cout<<"float sum" << floatnum <<endl;
    cout<<"d product" <<dprodust <<endl;
    cout<<"\n square root of" << dnum <<endl;
    cout<<"\n value of PI:" <<PI <<endl;
    cout<<"\n grade :" <<grade <<endl;

    return 0;

} 
//WAP to create simple calculator using class

#include<iostream>

using namespace std;

class cal
{
    float a,b;
public:
    void result()
    {
        cout<<"Enter frist number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
    }


    float add()
    {
         return a+b;
    }

    float sub()
    {
        return a-b;
    }

    float mul()
    {
        return a*b;
    }
    float div()
    {
        return a/b;
    }
};


 int main()
 {
    int choice;
    cal c;
    cout<<"Enter 1 add 2 number"<<
    "\nEnter 2t to subtract 2number"<<
    "\nEnter 3 to multipy 3 number"<<
    "\nEnter 4 to divvide 4 number"<<
    "\nEnter 0 to Exit";

    do
    {
        cout<<"\n Entre choice: ";
        cin>>choice;

    switch (choice)
    {
    case 1:
        c.result();
        cout<<"result:"<<c.add()<<endl;
        break;
    case 2:
        c.result();
        cout<<"result:"<<c.sub()<<endl;
        break;
    case 3:
        c.result();
        cout<<"result:"<<c.mul()<<endl;
    case 4:
        c.result();
        cout<<"result"<<c.div()<<endl;
    default:
        cout<<"invalid input!";
        break;
    }
    }while (choice>=1 && choice<=4);
    return 0;

 }
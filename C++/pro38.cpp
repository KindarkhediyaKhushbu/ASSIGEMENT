/*Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objects to use these functions.*/

#include<iostream>

using namespace std;

class calculator
{
int a, b;
public:

	void result() 
	{
		cout << "Enter first number: "; 
		cin >> a;

		cout << "Enter second number: "; 
		cin >> b;
	}

	int add() 
	{
		return a + b;
	}

	int sub() 
	{
		return a - b;
	}

	int mul() 
	{
		return a * b;
	}

	int div() 
	{
		return a / b;
	}
};


int main()
{
    int ch;
    calculator c;

    cout << "1. Addition" << 
			"\n2. Subtraction" << 
			"\n3. Multiplication" << 
			"\n4. Division" << 
			"\n0. Exit";
    
    do
    {
        cout << " Enter choice :";
        cin >> ch;
        if (ch == 0)
        {
            cout << " Program is terminated!";
            break;        
        }
    

        switch (ch)
        {
            case 1:
                c.result();
                cout << " result: " << c.add() << endl;
                break;
            case 2:
                c.result();
                cout << " result: " << c.sub() << endl;
                break;
            case 3:
                c.result();
                cout << " result: " << c.mul() << endl;
                break;
            case 4:
                c.result();
                cout << " result: " << c.div() << endl;
                break;
            default:
                cout << " Exit code!";
                break;
        }
        
    }while(ch >=1 && ch <= 4);
    

    return 0;

}
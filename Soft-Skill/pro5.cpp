// Define a class to represent a bank account. Include the following members:
// 3. Data Member:
// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account
// Member Functions
// -To assign values
// -To deposited an amount
// -To withdraw an amount after checking balance
// -To display name and balance


#include<iostream>
#include<string>
using namespace std;


class bank
{
    string depositorname;
    int accountname;
    string accounttype;
    double balance;

    
public:
// constractor to intilaize the value
    bank(string _depositorname,int _accountname,string _accounttype,double _balance)
     {

    depositorname=_depositorname;
    accountname=_accountname;
    accounttype=_accounttype;
    balance=_balance;
    }

        // Function to deposit an amount
    void depo(double amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<"Depositor" <<amount <<endl;
        }
        else
        {
            cout<<"Invalid deposit amount"<<endl;
        }
    }

        // Function to withdraw an amount
    void withdrow(double amount)
    {
        if (amount>0)
        {
            if(balance>=amount)
            {
                balance-=amount;
                cout<<"withdrow" <<amount<<endl;
            }
            else
            {
                cout<<"Insufficient withdrow"<<endl;
            }
        }else
        {
            cout<<"Invalid withdrow amount"<<endl;
        }
    }

    // Function to display account details and balance

    void displayaccodetails()
    {
        cout<<"depositor name " << depositorname<<endl;
        cout<<"account type"<<accounttype<<endl;
        cout<<"account name"<<accountname<<endl;
        cout<<"balance"<<balance<<endl;
    }

};
int main()
{
    //object create
    bank account1("khushbu",12345,"saving",1000);

    account1.depo(20000);
    account1.withdrow(5000);
    account1.displayaccodetails();

            
    return 0;

}

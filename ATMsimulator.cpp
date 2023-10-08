#include <iostream>
using namespace std;
int main()
{
    double acc_balance = 2000;
    double with_draw, deposit_amount;
    int choice;
    cout << "FOLLOWING ARE THE INSTRUCTIONS FOR ATM SIMULATOR(READ IT CAREFULLY)" << endl;
    cout << "1.Check Bank Balance" << endl;
    cout << "2.Withdraw Amount" << endl;
    cout << "3.Deposit Amount" << endl;
    cout << "4.EXIT From ATM Simulator" << endl;

    cout << "Enter Your Choice:" << endl;
    cin >> choice;

    if (choice >= 1 && choice <= 4)
    {
        switch (choice)
        {
        case 1:
        {
            cout << "Thank You For Selecting choice.1 " << endl;
            cout << "Your Bank Balance Is:" << acc_balance << "Rupees" << endl;
        }
        break;
        case 2:
        {
            cout << "Thank You For Selecting choice.2" << endl;
            cout << "Enter With-Drawal-Amount:" << endl;
            cin >> with_draw;
            if (with_draw <= 0)
            {
                cout << "Please Enter A Valid With-Drawal-Amount" << endl;
            }
            else if (with_draw > acc_balance)
            {
                cout << "Please Enter A Valid With-Drawal-Amount" << endl;
            }
            else if (with_draw <= acc_balance)
            {
                cout << "With Draw sussess full" << endl;
                cout << "Your New Bank Balance Is:" << acc_balance - with_draw << "Rupees" << endl;
            }
        }
        break;
        case 3:
        {
            cout << "Thank You For Selecting choice.3" << endl;
            cout << "Enter Deposit Amount:" << endl;
            cin >> deposit_amount;
            if (deposit_amount <= 0)
            {
                cout << "Please Enter A Valid Deposit Amount" << endl;
            }
            else if (deposit_amount > 0 && deposit_amount <= 499)
            {
                cout << "SORRY SIR/MADAM MINIMUM DEPOSIT AMOUNT SHOULD BE 500 RUPEES" << endl;
            }
            else
            {
                cout << "Your Deposit Is Successfull" << endl;
                cout << "Your Bank Balance Is :" << acc_balance + deposit_amount << "Rupees" << endl;
            }
        }
        break;
        case 4:
        {
            cout << "Thank  You For Selecting choice.4" << endl;
            cout << "We Are Going To Exit From ATM Simulator" << endl;
        }
        break;
        }
    }
    else if (choice > 4)
    {
        cout << "PLEASE ENTER A VALID CHOICE" << endl;
    }
    else
    {
        cout << "HAVE A GREST DAY" << endl;
    }
}

#include <iostream>
using namespace std;
int main()
{
    double n1, n2;
    char operation;

    cout << "Enter The First Number:" << endl;
    cin >> n1;

    cout << "Enter The Second Number:" << endl;
    cin >> n2;

    cout << "Enter The Operator(+,-,*,or/):" << endl;
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "Addition Of Given Numbers is:" << n1 + n2 << endl;
        break;

    case '-':
        cout << "Substraction Of The Given Numbers is:" << n1 - n2 << endl;
        break;

    case '*':
        cout << "Multiplication Of The Given Numbers is:" << n1 * n2 << endl;
        break;

    case '/':
        if (n2 != 0)
        {
            cout << "Division Of The Given Numbers is:" << n1 / n2 << endl;
        }
        else
        {
            cout << "Division is Not Possible" << endl;
        }
        break;

    default:
        cout << "Invalid Operator" << endl;
    }
    return 0;
}
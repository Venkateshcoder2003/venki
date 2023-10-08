#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year:" << endl;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "Entered Year ia a Laep year" << endl;
    }
    else
    {
        cout << "Entered year is not a leap year" << endl;
    }
}

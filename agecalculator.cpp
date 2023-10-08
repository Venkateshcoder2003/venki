#include <iostream>
using namespace std;

int main()
{
    int dob;
    cout << "Enter Your Birth Year:" << endl;
    cin >> dob;

    if (dob < 2023)
    {
        cout << "Your age is :" << 2023 - dob << "Years" << endl;
    }

    else if (dob >= 2023)
    {
        cout << "WRONG YEAR OR YEAR OUT OF RANGE "
             << " Enter Correct Year" << endl;
    }
    else
    {
        cout << "Have a Great Day" << endl;
    }
}
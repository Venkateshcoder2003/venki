#include <iostream>
using namespace std;
int main()
{
    int day_no;
    cout << "Enter the day number:" << endl;
    cin >> day_no;

    if (day_no >= 1 && day_no <= 7)
    {
        switch (day_no)
        {
        case 1:
        {
            cout << "Day Number: " << day_no << " Is SUNDAY" << endl;
        }
        break;
        case 2:
        {
            cout << "Day Number: " << day_no << " Is MONDAY" << endl;
        }
        break;
        case 3:
        {
            cout << "Day Number: " << day_no << " Is TUESDAY" << endl;
        }
        break;
        case 4:
        {
            cout << "Day Number: " << day_no << " Is WEDNESDAY" << endl;
        }
        break;
        case 5:
        {
            cout << "Day Number: " << day_no << " Is THURSDAY" << endl;
        }
        break;
        case 6:
        {
            cout << "Day Number: " << day_no << " Is FRIDAY" << endl;
        }
        break;
        case 7:
        {
            cout << "Day Number: " << day_no << " Is SATURDAY" << endl;
        }
        break;

        default:
        {
            cout << "INVALID DAY NUMBER" << endl;
        }
        }
    }
    else
    {
        cout << "INVALID DAY NUMBER ,Have A Great Day" << endl;
    }
}
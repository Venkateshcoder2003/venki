#include <iostream>
using namespace std;
int main()
{
    int sum = 0, i;
    for (i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    cout << "Sum Of 1 to 100 Is:" << sum << endl;
}
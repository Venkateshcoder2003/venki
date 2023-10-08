#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, result = 0, n = 0, rem, n_num, nn_num;
    cout << "Enter An Integer:" << endl;
    cin >> num;
    n_num = num;

    while (n_num != 0)
    {
        n_num = n_num / 10;
        n++;
    }
    nn_num = num;
    while (nn_num != 0)
    {
        rem = nn_num % 10;
        result = result + pow(rem, n);
        nn_num = nn_num / 10;
    }

    if (result == num)
    {
        cout << "Entered Number Is Armstrong Number" << endl;
    }
    else
    {
        cout << "Entered NUmber Is Not A Armstrong NUmber" << endl;
    }
}
#include <iostream>
#include <cmath>
using namespace std;

int bintodeci(int num)
{
    int rem, ans = 0, i = 0;

    while (num != 0)
    {
        rem = num % 10;
        ans = ans + pow(2, i) * rem;
        num = num / 10;
        i++;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter The Binaray Number:" << endl;
    cin >> n;

    cout << "The Binaray To Decimal Is:" << bintodeci(n) << endl;
}
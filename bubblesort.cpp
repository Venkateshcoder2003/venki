#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, temp;
    cout << "Enter Size Of Array:" << endl;
    cin >> n;

    int a[n];
    for (i = 0; i <= n - 1; i++)
    {
        cout << "Enter Element " << i << ":" << endl;
        cin >> a[i];
    }
    cout << endl;

    cout << "BUBBLE SORT:" << endl;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "Elements After Sorting Are:" << endl;
    for (i = 0; i <= n - 1; i++)
    {
        cout << a[i] << " ";
    }
}
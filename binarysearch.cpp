#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int low, high, mid, i;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, i;
    cout << "Enter Size Of Array:" << endl;
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter Element " << i << " :" << endl;
        cin >> arr[i];
    }
    cout << endl;
    cout << "Entered Elements Are:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int key;
    cout << endl;
    cout << "Enter Key Element To Be Searched:" << endl;
    cin >> key;
    int res;
    res = binarysearch(arr, n, key);
    if (res == -1)
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "The Key " << key << " Found At Position " << res << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

// using two pointer
void reverseArray(int arr[], int l, int r)
{

    // Base condition
    if (l >= r)
    {
        return;
    }

    // Swap first and last
    swap(arr[l], arr[r]);

    // Recursive call
    reverseArray(arr, l + 1, r - 1);
}

// using single pointer
void reversearray2(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reversearray2(i+1,arr,n);
}

int main()
{

    int n;
    cin >> n;

    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    reversearray2(0, arr1, n);
    // reverseArray(arr1, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}
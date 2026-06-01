//trapping rain water problem
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int leftmax[100];
    int rightmax[100];
    leftmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        leftmax[i] = max(leftmax[i - 1], arr[i]);
    }
    rightmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rightmax[i] = max(rightmax[i + 1], arr[i]);
    }
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        water += min(leftmax[i], rightmax[i]) - arr[i];
    }
    cout << water;
    return 0;
}

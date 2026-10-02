// quick sort algorithm
#include <bits/stdc++.h>
using namespace std;int partition(int arr[], int l, int h)
{
    int pivot = arr[l];

    int i = l;
    int j = h+1;

    while (i < j)
    {
        do
        {
            i++;
        } while (i < h && arr[i] <= pivot);

        do
        {
            j--;
        } while (j > l && arr[j] > pivot);

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[l], arr[j]);

    return j;
}
void quicksort(int arr[], int l, int h)
{
    if (l < h)
    {
        int j = partition(arr, l, h);
        quicksort(arr, l, j);
        quicksort(arr, j + 1, h);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
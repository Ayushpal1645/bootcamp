//count  subsequence whose sum is k
#include <bits/stdc++.h>
using namespace std;
int printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (sum == s)
        {
            
            return 1;
        }

           else  return 0;
        }

        // take  or pick a particular index into  the subsequece
        ds.push_back(arr[ind]);
        s += arr[ind];

       int l=printS(ind + 1, ds, s, sum, arr, n);
        s -= arr[ind];
        ds.pop_back();

        // not take
        int r=printS(ind + 1, ds, s, sum, arr, n);

        return l+r;
    }

    int main()
    {
        int arr[] = {1, 2, 1};
        int n = 3;
        int sum = 2;
        vector<int> ds;
       cout<< printS(0, ds, 0, sum, arr, n);
        return 0;
    }
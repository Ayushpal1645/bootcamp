#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int target;
    cin >> target;
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int sum = v[l] + v[r];
        if (sum < target)
        {
            l++;
        }
        else if (sum > target)
        {
            r--;
        }
        else
        {
           cout << l << " " << r;
           return 0;
        }
    }
}

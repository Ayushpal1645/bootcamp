#include <bits/stdc++.h>
using namespace std;
string longestprefix(vector<string> &str)
{
    int n = str.size();
    sort(str.begin(), str.end());
    string first = str[0];
    string last = str[n - 1];
    string ans = "";
    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if (first[i] == last[i])
        {
            ans += first[i];
        }
        else
        {
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<string> st;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        st.push_back(x);
    }
    cout << longestprefix(st);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string goal;
    cin >> goal;
    if (s.size() != goal.size())
    {
        cout << "false";
        return 0;
    }
    string temp = s + s;
    cout << (temp.find(goal) != string::npos ? "true" : "false");

    return 0;
}

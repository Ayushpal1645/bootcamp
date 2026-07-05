#include <bits/stdc++.h>
using namespace std;
bool isvalid(string s)
{
    stack<char> st;
    for (char ch : s)
    {
        if (ch == '[' || ch == '{' || ch == '(')
        {
            st.push(ch);
        }

        else
        {
            if (st.empty())
            {
                cout << "not valid";
                return false;
            }
            else
            {
                if (ch=='}'&&st.top()=='{'||
                    ch==']'&&st.top()=='['||
                    ch==')'&&st.top()=='('){
                        st.pop();
                    }
            }
        }
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    if (isvalid(s))
    {
        cout << "Valid";
    }
    else
    {
        cout << "not valid";
    }
    return 0;
}
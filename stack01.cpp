 #include<bits/stdc++.h>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    stack<char> st;

    for(char ch : str) {

        if(ch != ' ') {
            st.push(ch);
        }

        else {

            while(!st.empty()) {
                cout << st.top();
                st.pop();
            }

            cout << " ";
        }
    }

    // Last word print
    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }

    return 0;
}




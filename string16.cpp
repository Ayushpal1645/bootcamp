#include <bits/stdc++.h>
using namespace std;

string decodeString(string s) {
    stack<int> countStack;
    stack<string> strStack;

    string curr = "";
    int num = 0;

    for (char ch : s) {

        if (isdigit(ch)) {
            num = num * 10 + (ch - '0');
        }

        else if (ch == '[') {
            countStack.push(num);
            strStack.push(curr);

            num = 0;
            curr = "";
        }

        else if (ch == ']') {

            int repeat = countStack.top();
            countStack.pop();

            string prev = strStack.top();
            strStack.pop();

            string temp = "";

            while (repeat--) {
                temp += curr;
            }

            curr = prev + temp;
        }

        else {
            curr += ch;
        }
    }

    return curr;
}

int main() {
    string s = "3[a2[c]]";
    cout << decodeString(s);
}
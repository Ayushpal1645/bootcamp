#include <bits/stdc++.h>
using namespace std;

int compress(string s) {
    string result = "";
    int n = s.length();

    for (int i = 0; i < n; ) {
        char current = s[i];
        int count = 0;

        while (i < n && s[i] == current) {
            count++;
            i++;
        }

        result += current;

        if (count > 1)
            result += to_string(count);
    }

    return result.length();
}

int main() {
    string s;
    cin >> s;

    cout << compress(s);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int index = 0;
    int i = 0;

    while (i < n) {
        char current = chars[i];
        int count = 0;

        // count duplicates
        while (i < n && chars[i] == current) {
            count++;
            i++;
        }

        // store character
        chars[index] = current;
        index++;

        // store count
        if (count > 1) {
            string c = to_string(count);

            for (char ch : c) {
                chars[index] = ch;
                index++;
            }
        }
    }

    return index;
}

int main() {
    string s;
    cin >> s;

    vector<char> chars(s.begin(), s.end());

    int len = compress(chars);

    cout << "Length = " << len << endl;

    cout << "Compressed String = ";

    for (int i = 0; i < len; i++) {
        cout << chars[i];
    }

    return 0;
}
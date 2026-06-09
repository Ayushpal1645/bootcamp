#include <iostream>
#include <vector>
using namespace std;

string smallestSubsequence(string s) {
    int n = s.size();

    string result;

    vector<bool> taken(26, false);
    vector<int> lastindex(26);

    // Last occurrence store
    for (int i = 0; i < n; i++) {
        lastindex[s[i] - 'a'] = i;
    }

    for (int i = 0; i < n; i++) {

        char ch = s[i];
        int idx = ch - 'a';

        // Already present
        if (taken[idx])
            continue;

        while (!result.empty() &&
               result.back() > ch &&
               lastindex[result.back() - 'a'] > i) {

            taken[result.back() - 'a'] = false;
            result.pop_back();
        }

        result.push_back(ch);
        taken[idx] = true;
    }

    return result;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Smallest Subsequence: "
         << smallestSubsequence(s);

    return 0;
}
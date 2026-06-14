#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2) {

    int n = s1.length();
    int m = s2.length();

    if (n > m) {
        return false;
    }

    sort(s1.begin(), s1.end());

    for (int i = 0; i <= m - n; i++) {

        string substring = s2.substr(i, n);

        sort(substring.begin(), substring.end());

        if (s1 == substring) {
            return true;
        }
    }

    return false;
}

int main() {

    string s1, s2;

    cout << "Enter s1: ";
    cin >> s1;

    cout << "Enter s2: ";
    cin >> s2;

    if (checkInclusion(s1, s2))
        cout << "true";
    else
        cout << "false";

    return 0;
}



//using sliding window
// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {

//         int n = s1.size();
//         int m = s2.size();

//         if (n > m)
//             return false;

//         vector<int> freq1(26, 0);
//         vector<int> window(26, 0);

//         // Count s1
//         for (char ch : s1)
//             freq1[ch - 'a']++;

//         int i = 0;

//         for (int j = 0; j < m; j++) {

//             // add current character
//             window[s2[j] - 'a']++;

//             // maintain window size
//             if (j - i + 1 > n) {
//                 window[s2[i] - 'a']--;
//                 i++;
//             }

//             // compare
//             if (window == freq1)
//                 return true;
//         }

//         return false;
//     }
// };

#include <bits/stdc++.h>
using namespace std;

int m, n;
int t[1001][1001];

// ---------- TOP DOWN ----------
int solve(string &s1, string &s2, int i, int j) {

    if (i >= m || j >= n)
        return 0;

    if (t[i][j] != -1)
        return t[i][j];

    if (s1[i] == s2[j]) {

        return t[i][j] =
            1 + solve(s1, s2, i + 1, j + 1);
    }

    return t[i][j] =
        max(
            solve(s1, s2, i + 1, j),
            solve(s1, s2, i, j + 1)
        );
}


// ---------- BOTTOM UP ----------
int bottomUp(string s1, string s2) {

    vector<vector<int>> dp(
        m + 1,
        vector<int>(n + 1, 0)
    );

    for (int i = 1; i <= m; i++) {

        for (int j = 1; j <= n; j++) {

            if (s1[i - 1] == s2[j - 1]) {

                dp[i][j] =
                    1 + dp[i - 1][j - 1];

            }
            else {

                dp[i][j] =
                    max(
                        dp[i - 1][j],
                        dp[i][j - 1]
                    );
            }
        }
    }

    return dp[m][n];
}


int main() {

    string s1, s2;

    cout << "Enter String 1: ";
    cin >> s1;

    cout << "Enter String 2: ";
    cin >> s2;

    m = s1.size();
    n = s2.size();

    memset(t, -1, sizeof(t));

    cout << "\nTop Down = "
         << solve(s1, s2, 0, 0)
         << endl;

    cout << "Bottom Up = "
         << bottomUp(s1, s2)
         << endl;

    return 0;
}
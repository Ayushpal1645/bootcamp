#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string temp = s;

            // sort to make key
            sort(temp.begin(), temp.end());

            mp[temp].push_back(s);
        }

        vector<vector<string>> result;

        for (auto it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};

int main() {

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    Solution obj;

    vector<vector<string>> ans = obj.groupAnagrams(strs);

    cout << "[";

    for (int i = 0; i < ans.size(); i++) {
        cout << "[";

        for (int j = 0; j < ans[i].size(); j++) {
            cout << "\"" << ans[i][j] << "\"";

            if (j < ans[i].size() - 1)
                cout << ",";
        }

        cout << "]";

        if (i < ans.size() - 1)
            cout << ",";
    }

    cout << "]";

    return 0;
}
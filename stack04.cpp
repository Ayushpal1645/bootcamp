// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arr = {4, 5, 2, 25};
//     int n = arr.size();

//     for(int i = 0; i < n; i++) {
//         int ans = -1;

//         for(int j = i + 1; j < n; j++) {
//             if(arr[j] > arr[i]) {
//                 ans = arr[j];
//                 break;
//             }
//         }

//         cout << ans << " ";
//     }
// }




//optimal approch

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int>& arr) {
    int n = arr.size();

    vector<int> ans(n);
    stack<int> st;

    for(int i = n - 1; i >= 0; i--) {

        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if(st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();

        st.push(arr[i]);
    }

    return ans;
}

int main() {

    vector<int> arr = {4,5,2,25};

    vector<int> ans = nextGreater(arr);

    for(int x : ans)
        cout << x << " ";
}
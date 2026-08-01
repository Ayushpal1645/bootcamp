#include<bits/stdc++.h>
using namespace std;
int celebrity(vector<vector<int>> &M,int n){
    stack<int> st;
    for(int i=0;i<n;i++){
        st.push(i);
    }
    while(st.size()>1){
     int a=st.top();
     st.pop();
     int b=st.top();
     st.pop();
     if(M[a][b]==1){
        st.push(b);
     }
     else{
        st.push(a);
     }
    }
    int candidate=st.top();
    
    //row check
    //check clelbirty kisko nhi janta
    for(int i=0;i<n;i++){
        if(i!=candidate && M[candidate][i]==1){
            return -1;
        }
    }

    //chech sb celbrity o jante hai
    //column check
    for(int i=0;i<n;i++){
        if(i!=candidate && M[i][candidate]==0){
            return -1;
        }
    }
    return candidate;

}
int main(){
     int n;
    cout<< "Enter number of persons: ";
    cin >> n;

    vector<vector<int>> M(n, vector<int>(n));

    cout << "Enter " << n << "x" << n << " matrix:\n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> M[i][j];
        }
    }

    int ans = celebrity(M, n);

    if(ans == -1)
        cout << "No Celebrity";
    else
        cout << "Celebrity is Person " << ans;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack <char> st;
    for(char ch:s){
        st.push(ch);
    }
    for(char ch:s){
        cout<<st.top();
        st.pop();
    }
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else {
            if(st.empty()){
                cout<<"not  balanced";
                return 0;
            }
            if(s[i]==')' && st.top()=='(' ||
               s[i]=='}' && st.top()=='{' ||
               s[i]==']' && st.top()=='['){
                st.pop();
            }
            else{
                cout<<"not balanced";
                return 0;
            }
        }
    }
    if(st.empty()){
        cout<<"balanced";
    }
    else{
        cout<<"not balanced";
    }
    return 0;

}
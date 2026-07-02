#include<bits/stdc++.h>
using namespace std;
bool isvalid(string s){
   stack <char> st;
   for(char ch:s){
    if(ch=='('||ch=='{'||ch=='['){
        st.push(ch);
    }
    else {
        if(st.empty()){
            cout<<"invalid";
            return false;
        }
        if(ch=='}'&&st.top()=='{'||
              ch==']'&&st.top()=='['||
            ch==')'&&st.top()=='('){
                st.pop();
            }
         else{
            return false;
         }   
    }
   }
   return st.empty();
}
   int main(){
    string s;
    cin >> s;
    if(isvalid(s)){
        cout<<"valid";}
    else{
            cout<<"not valid";
        }
    
    return 0;
}
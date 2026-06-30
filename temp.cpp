#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    // stack<char> st;
    // for(char ch:s){
    //     st.push(ch);
    // }
    // for(char ch:s){
    //     if(ch!=st.top()){
    //         return false;
    //     }
    //     st.pop();
    // }
    // return true;

    int left=0;
    int right=s.size()-1;
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
return true;
    }
}
int main(){
    string s;
    getline(cin,s);
    if(ispalindrome(s)){
        cout<<"its palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}
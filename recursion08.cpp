#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s,int i){
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
     return ispalindrome(s,i+1);

}
int main(){
    string s;
    cin>>s;
    if(ispalindrome(s,0)){
        cout<<"Palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
    
}
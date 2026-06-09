
//check palindrome or not
#include<bits/stdc++.h>
using namespace std;        
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int l=0;
    int h=n-1;
    while(l<h){
        if(tolower(s[l])!=tolower(s[h])){
            cout<<"not palindrome";
            return 0;
        }
        l++;
        h--;
    }
    
    cout<<"palindrome";
    return 0;
}
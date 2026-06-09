#include<bits/stdc++.h>
using namespace std;
 int main(){
    string s;
    getline(cin,s);
    
    string username="";
    for(char ch:s){
        if(ch!=' '){
            username+=tolower(ch);
        }
    }
    cout<<username;
    return 0;

 }
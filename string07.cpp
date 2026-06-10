#include<bits/stdc++.h>
using namespace std;
int firststring(string s){
    unordered_map <char,int> freq;
    for(char ch:s){
        freq[ch]++;
    }
    for(int i=0;i<s.size();i++){
        if(freq[s[i]]==2){
            return i;
        }
    }
    return -1;
    }
    int main(){
        string s;
        cin>>s;
        int n=firststring(s);
        cout<<n;
        return 0;
    }
/*Approach
Har character check karo:
A-Z, a-z, 0-9 → valid
kuch aur → "INVALID"
Letters ko uppercase karo.
Length 2–10 honi chahiye.
Kam se kam 1 digit hona chahiye.
Formatting:
length % 3 == 0 → groups of 3
warna groups of 3, aur last mein 2 characters.*/

#include <bits/stdc++.h>
using namespace std;

string validatelicense(string plate){
    string s="";
    bool hasdigit=false;

    for(char ch:plate){
        if(isalnum(ch)){
            if(isalpha(ch)){
                ch=toupper(ch);
            }
            if(isdigit(ch)){
                hasdigit=true;
            }

            s +=ch;

        }
        else{
            return "INVALID";
        }
    }
    if(s.size()<2||s.size()>10){
        return "INVALID";
    }
    if(!hasdigit){
        return "INVALID";
    }

    string ans;
    int n=s.size()-1;
    if(n%3==0){
        for(int i=0;i<n;i+=3){
            if(!ans.empty()){
                ans+="-";
            }
            ans+=s.substr(i,3);
        }
    }
    else{
        int lastdigit=n-2;
        for(int i=0;i<lastdigit;i+=3){
            if(!ans.empty()){
                ans+="-";
            }
            ans+=s.substr(i,3);
        }
        ans+="-";
        ans+=s.substr(lastdigit,2);
    }
    return ans;

}
int main(){
    string s;
    cin>>s;
    cout<<validatelicense(s);
    return 0;
}
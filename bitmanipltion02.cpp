#include<bits/stdc++.h>
using namespace std;
int convert2decimal(string s){
    int n=s.size();
    int p2=1;
    int num=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            num=num+p2;
            
        }
        p2=p2*2;
    }
    return num;
}
int main(){
    string s;
    cin>>s;
    int result=convert2decimal(s);
    cout<< result;
    return 0;
    
}
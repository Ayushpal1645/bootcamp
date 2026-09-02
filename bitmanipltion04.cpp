#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(n%4==1){
            cout<<1;
            return 0;
        }
        else if(n%4==2){
            cout<<n+1;
            return 0;
        }
        else if(n%4==3){
            cout<<0;
            return 0;
        }
        else{
            cout<<4;
            return 0;
        }
    }
    return 0;
}
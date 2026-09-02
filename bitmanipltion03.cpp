#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"enter the ith bit";
    int i;
    cin>>i;
    if(n&(1<<i)!=0){
        cout<<"set";
    }
    else{
        cout<<"not set";
    }
    return 0;
}

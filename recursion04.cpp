#include<bits/stdc++.h>
using namespace std;
void fname(int i,int n){
 if(i<1){
    return ;
 }
 
 fname(i-1,n);
 cout<<i<<" ";

}


int main(){
    int n;
    cin>>n;
    fname(n,n);
    return 0;

}
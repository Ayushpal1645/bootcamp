#include<bits/stdc++.h>
using namespace std;
void fname(int i,int n){
 if(i==0){
    return ;
 }
 cout<<i<<" ";
 fname(i-1,n);
}


int main(){
    int n;
    cin>>n;
    fname(n,n);
    return 0;

}
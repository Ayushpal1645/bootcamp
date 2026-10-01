#include<bits/stdc++.h>
using namespace std;
void fname(int i,int n){
 if(i>n){
    return ;
 }
 cout<<i<<" ";
 fname(i+1,n);
}


int main(){
    int n;
    cin>>n;
    fname(1,n);
    return 0;

}
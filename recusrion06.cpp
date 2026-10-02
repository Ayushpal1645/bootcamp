//sum of first n natural numbers using recursion
#include<bits/stdc++.h>
using namespace std;

//parameterized approch
void sumofn(int i,int sum ){
    if(i<1){
        cout<<sum;
        return ;
    }
    sumofn(i-1,sum+i);

}

//functional approach
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+ sum(n-1);
}
int main(){
    int n;
    cin>>n;
    //  sumofn(n,0);
    cout<< sum(n);
    return 0;
}
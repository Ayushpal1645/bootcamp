//sum of first n natural numbers using recursion
#include<bits/stdc++.h>
using namespace std;
void sumofn(int i,int sum ){
    if(i<1){
        cout<<sum;
        return ;
    }
    sumofn(i-1,sum+i);

}
int main(){
    int n;
    cin>>n;
     sumofn(n,0);
    return 0;
}
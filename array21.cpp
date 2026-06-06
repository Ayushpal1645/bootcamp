#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[100]={2,4,1,6,8,12};
    int count=0;
    int maxcount=0;
    for(int i=0;i<n;i++){
       if(i==0){
        count++;
       }
       else{
        if(arr[i]<arr[i+1]){
            count++;
        }
        else{
            count=1;
        }
       }
       if(count>maxcount){
        maxcount= count;
       }
    }
    cout<<maxcount;
    return 0;
}
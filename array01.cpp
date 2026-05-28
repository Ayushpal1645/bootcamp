//diffrece b/w last and first element in a array 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];         

    }
   int  diff=arr[0]-arr[n-1];
    cout<<diff;
    return 0;
}
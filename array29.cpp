//remove duplicate in -place sorted array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    for(int i=0;i<=i;i++){
        cout<<arr[i]<<" ";
    }
    cout<<i+1;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //delet smallest element in the array
    int smallest=arr[0];    
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==smallest){
            for(int j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            n--;
            i--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
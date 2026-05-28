#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100][100]; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int start=0;
        int end=n-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }

    for(int i=0;i<n;i++){
        int top=0;
         int bottom=n-1;
        while(top<bottom){
            swap(arr[top][i],arr[bottom][i]);
            top++;
            bottom--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
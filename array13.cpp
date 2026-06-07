#include<iostream>
using namespace std;
 int main(){
    int r,c;
    cin>>r>>c;
    int arr[50][50];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=r-1;i>=0;i--){
        for(int j=c-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
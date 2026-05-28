#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int arr[100][100];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || i==r-1 || j==0 || j==c-1){
                sum+=arr[i][j];    
            }
            
    }
    cout<<sum;
    return 0;

}
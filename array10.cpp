#include <iostream>
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
    
    cout<<"revers each row of the matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=c-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"transose matrix"<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


}

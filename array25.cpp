#include<iostream>
using namespace std;
int main(){
    int r, c;
    cin>>r>>c;
    int arr[50][50];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<r;i+=2){
        for(int j=0;j<c;j++){
            arr[i][j]=-arr[i][j];
        }

        

        // swap current row with previous row
        for(int j=0;j<c;j++){
            swap(arr[i][j], arr[i-1][j]);
        }
    }
    cout<<"reult:-"<<endl;
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
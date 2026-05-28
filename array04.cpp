//insert a either new row or column in th matrix array
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
    int x;
    cin>>x;
    char ch;
    cin>>ch;
    if(ch=='r'){
        for(int i=r-1;i>=0;i--){
            for(int j=0;j<c;j++){
                arr[i+1][j]=arr[i][j];
            }
        }
        for(int j=0;j<c;j++){
            arr[0][j]=x;
        }
        r++;
    }
    else if(ch=='c'){
        for(int j=c-1;j>=0;j--){
            for(int i=0;i<r;i++){
                arr[i][j+1]=arr[i][j];
            }
        }
        for(int i=0;i<r;i++){
            arr[i][0]=x;
        }
        c++;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
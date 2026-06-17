#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int arr[100][100];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    // Transpose
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for(int i=0;i<r;i++){
        int left=0;
        int right=c-1;

        while(left<right){
            swap(arr[i][left], arr[i][right]);
            left++;
            right--;
        }
    }

    cout<<"Matrix after 90 degree rotation:\n";

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
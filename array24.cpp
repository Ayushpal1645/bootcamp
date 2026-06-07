#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[10][10];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }


    int primary = 0;
    int secondary = 0;

    for(int i=0;i<n;i++){
        primary += arr[i][i];

        secondary += arr[i][n-1-i];
    }

    cout << abs(primary - secondary);

    return 0;
}
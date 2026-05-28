//rotate matirx by 90
#include <iostream> 
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    int arr[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "rotate matrix by 90 degree" << endl;
    for (int j = 0; j < c; j++) {
        for (int i = r - 1; i >= 0; i--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

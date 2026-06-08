#include<iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    int count = 0;
    int candidate = -1;

    // Find candidate
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = arr[i];
        }

        if(arr[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    // Verify candidate
    count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == candidate) {
            count++;
        }
    }

    if(count > n/2)
        return candidate;

    return -1;
}

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << majorityElement(arr, n);

    return 0;
}
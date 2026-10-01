#include <iostream>
using namespace std;

void print(int i, int n) {

    // Base Case
    if(i > n) {
        return;
    }

    // Recursive Call
    print(i + 1, n);

    // Work while coming back
    cout << i << " ";
}

int main() {
    int n = 5;

    print(1, n);

    return 0;
}
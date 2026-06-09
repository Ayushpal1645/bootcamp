#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "ABCABCXABCXYbw";
    string pattern = "ABC";
    string replace_with = "*";

    size_t pos = 0;

    while ((pos = str1.find(pattern)) != string::npos) {
        str1.replace(pos, pattern.length(), replace_with);
    }

    cout << str1;

    return 0;
}
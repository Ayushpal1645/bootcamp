#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count=0;
    for(char ch: s){
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count++;
        }
    }
    cout<<count;
    return 0;
}
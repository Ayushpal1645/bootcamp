#include<bits/stdc++.h>
using namespace std;
 int main(){
    int a=5;
    cout<<a;
    int b=6;

    cout<<b;
     cout<<"after swap";
     a=a^b;
     b=((a^b)^b);
     a=((a^b)^a);
     cout<<a;
     cout<<b;
     return 0;



 }
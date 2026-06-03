//1. Simple Triangle Patterns


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
/*

    Right-Angled Triangle
*
**
***
****

*/


    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }   

    cout<<endl;

/*
Inverted Right-Angled Triangle

*****

****

***

**

*

*/
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    cout<<endl; 
}
cout<<endl;
/*
Number Triangle
1
12
123
1234
12345
*/

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
}   
cout<<endl;
/*

Character Triangle
A
AB
ABC
ABCD
ABCDE
*/
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<(char)(j+64);
    }
    cout<<endl;
}

cout<<endl;

for(int i=0;i<n;i++){
for(int j=0;j<=i;j++){
    cout<<"*";
}
cout<<endl;

}
return 0;
}

//

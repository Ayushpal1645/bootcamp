//2. Pyramid Patterns
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
/*Star Pyramid
    *
   ***
  *****
 *******
*/
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}

cout<<endl;
/*Number Pyramid
    1
   121
  12321
 1234321
*/
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int j=i-1;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
}
cout<<endl;

/*Character Pyramid
    A
   ABA
  ABCBA
 ABCDCBA
 ABCDEDCBA

*/
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<(char)(j+64);
    }
    for(int j=i-1;j>=1;j--){
        cout<<(char)(j+64);
    }
    cout<<endl;
}
 return 0;
}

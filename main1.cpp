#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
          for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}
/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/


#include<iostream>
using namespace std;

int main() {
    int n = 3;

    for(int block=0; block<n; block++) {

        for(int i=1; i<=n; i++) {

            // spaces
            for(int s=1; s<=block*3; s++) {
                cout<<" ";
            }

            // stars
            for(int j=1; j<=i; j++) {
                cout<<"*";
            }

            cout<<endl;
        }
    }

    return 0;
}
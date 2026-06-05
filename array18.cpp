#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
   
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
       int  sum=0;
    for(int j=i;j<n;j++){
        sum+=v[j];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
    return 0;
}
}

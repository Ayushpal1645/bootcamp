
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int count =0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            count++;
            maxi=max(count,maxi);
        }
        else{
            count=0;
        }
    }
    cout<<maxi;
    return 0;
}
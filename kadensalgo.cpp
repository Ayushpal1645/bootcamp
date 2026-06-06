#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int currsubsum=v[0];
    int maxsubsum=v[0];
    for(int i=1;i<n;i++){
        currsubsum= max(v[i],currsubsum+v[i]);
        maxsubsum=max(maxsubsum,currsubsum);
    }
    cout<<maxsubsum;
    return 0;
}
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
    map <int,int> mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    vector <pair<int,int>> vp;
    for(auto it:mp){
        vp.push_back({it.second,it.first});
    }
    sort(vp.begin(),vp.end());
    for(int i=vp.size()-1;i>=0;i--){
        for(int j=0;j<vp[i].first;j++){
            cout<<vp[i].second<<" ";
        }
    }
    return 0;

}


#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    map<int,int> freq;

    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    for(auto x:freq){
        cout<<x.first<<" -> "<<x.second<<endl;
    }

}
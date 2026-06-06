#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int i=0;
    int j=n-1;
    int maxwater=0;
    while(i<j){
        int w=j-1;
        int h=min(v[i],v[j]);
        int area=w*h;
        maxwater=max(maxwater,area);
        if(v[i]>v[j]){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<maxwater;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     vector <int> v;
     vector <int> v1;
     int maxi=INT_MIN;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
     }

      for(int i=n-1;i>=0;i--){
        if(v[i]>maxi){
            v1.push_back(v[i]);

        }
        maxi=max(maxi,v[i]);
      }
     sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        return 0;
        

}
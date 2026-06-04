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
    int low =0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(v[mid]==0){
            swap(v[low],v[mid]);
            low++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;

        }
        else{
            swap(v[mid],v[high]);
                high--;
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
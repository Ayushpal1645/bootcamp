#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int arr1[n1];
    int arr2[n2];
     unordered_set <int> st;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
        st.insert(arr1[i]);
    }
      for(int i=0;i<n2;i++){
        cin>>arr2[i];
        st.insert(arr2[i]);
    }
   int result[st.size()];
   int i=0;
   for(auto it:st){
    result[i++]=it;
   }
   for(int i=0;i<st.size();i++){
    cout<<result[i]<<" ";
   }
   return 0;
    
}
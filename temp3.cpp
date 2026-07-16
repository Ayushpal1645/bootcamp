#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   queue <int> q;
   for(int i=0;i<n/2;i++){
    q.push(arr[i]);
   }

    int j=n/2;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    
    if(j<n){
        cout<<arr[j++]<<" ";
    }
}
    

   
   return 0;

}
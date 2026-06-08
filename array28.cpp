#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
  vector <int> v;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    v.push_back(x);
  }
  int Xor=0;
for(int x:v){
    Xor=Xor^x;
}
cout<<Xor;
return 0;

}
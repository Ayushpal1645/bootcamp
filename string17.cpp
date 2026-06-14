#include<bits/stdc++.h>
using namespace std ;
int longestsubstring(string s){
    int i=0;
    int maxlen=0;
    int j=0;
    unordered_set<char> st;
    while(j<s.size()){
        if(st.find(s[j])==st.end()){
            st.insert(s[j]);
            maxlen=max(maxlen,j-i+1);
            j++;

        }
        else{
            while(st.find(s[j])!=st.end()){
                st.erase(s[i]);
                i++;
            }
        }
    }
    return maxlen;
}
int main(){
    string s;
    cin>>s;
    cout<<longestsubstring(s);
    return 0;

}
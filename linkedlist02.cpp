#include<bits/stdc++.h>
using namespace std;
 class node{
    public:
    int data;
    node* next;
    public:
    node(int data1,node*next1){
        data=data1;
        next=next1;
    }

    //multiple costrictor
    public:
    node(int data1){
        data=data1;
        next=nullptr;
    }
 };

 node* converarr2ll(vector <int> &arr){
    node* head= new node(arr[0]);
    node* mover =head;
    for(int i=0;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
 }

 //length of ll
int lengthOfLL(Node* head) {
int cnt = 0;
Node* temp = head;
while(temp) {
temp = temp->next;
cnt++;

return cnt;
}


//search in ll
int checkIfPresent(Node* head, int val) {
Node temp = head;
while(temp) {
if(temp->data == val) return 1;
temp = temp->next;
}
return 0;
}

 int main(){
    vector<int> arr= {2,5,8,7};
   node* head =converarr2ll(arr);
    // node* temp= head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }

    // cout<<lengthOfLL(head);
 }
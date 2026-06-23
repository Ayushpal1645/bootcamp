#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *back;

public:
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
node* arraytoll(vector <int> &arr){
    node* head= new node(arr[0]);
    node* prev=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

//revesrrre a ll
node* reversell(node* head){
    stack <int> st;
    node* temp=head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp= head;
    while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return head;
}

//2nd apprch single traversal


node* revsersell2(node* head){
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL){
        prev=curr->back;
        curr->back=curr->next;
        curr->next=prev;
        curr=curr->back;

    }
    return prev->back;
    
}
int main(){
    vector <int> arr={1,2,3,4};
    node* head=arraytoll(arr);
    head=reversell(head);
    print(head);
    return 0;
}
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

// array to dll
node *convertarr2dll(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
} 

// print dll
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}


//deltion in DLL

//head
node* deletehead(node* head)
{
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    node*prev=head;
    head=head->next;

    head->back=nullptr;
    prev->next=nullptr;

    delete prev;
    return head;
}


//tail
node* deletetail(node* head){
      if(head==NULL || head->next==NULL){
        return NULL;
    }
    node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
   node* prev=tail->back;
    prev->next=nullptr;
    tail->back=nullptr;

    delete tail;
    return head;
}



//delete by positon 
node* removekth(node* head,int k){
    if(head==NULL){
         return NULL;
    }
    int cnt=0;
    node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k)break;
        temp=temp->next;
    }
   node* prev=temp->back;
   node* front=temp->next;
   if(prev==NULL&&front==NULL){
    return NULL;
   }
   else if(prev==NULL){
      return   deletehead(head);
       
    
   }
   else if(front ==NULL){
     return deletetail(head);
    
   }
   prev->next=front;
   front->back=prev;
   temp->next=nullptr;
   temp->back=nullptr;
   free(temp);

   return head;

}

void deltenode(node* temp){
    node* prev=temp->back;
    node* front=temp->next;

    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        free(temp);
        return;

    }
    prev->next=front;
    front->back=prev;
    temp->back=temp->next=nullptr;
    free(temp);
}




//INSERTION IN DLL

//beforehead

node* insertbeforehead(node* head,int value){
    node* newhead=new node(value,head,nullptr);
    head->back=newhead;
    return newhead;

}

//beforetail
node* insertbefortail(node* head,int value){
    if(head->next==NULL){
        insertbeforehead(head,value);
    }
    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    node* prev=tail->back;
    node* newnode=new node(value,tail,prev);
    prev->next=newnode;
    tail->back=newnode;
   
    return head;
}


//insert before the kth node 

node* insertbeforekth(node* head,int k,int value){
    if(k==1){
        return insertbeforehead(head,value);
    }
    node* temp =head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k)break;
        temp=temp->next;
    }
    node* prev =temp->back;
    node* newnode=new node(value,temp,prev);
    prev->next=newnode;
    temp->back=newnode;
    return head;

}

void insertbefornode(node* Node,int value){
    node* prev=Node->back;
    node* newnode=new node(value,Node,prev);
    prev->next=newnode;
    Node->back=newnode;

}


int main()
{
    vector<int> arr = {12, 5, 8, 7};
    node *head = convertarr2dll(arr);

    // head=deletehead(head);

    // head=deletetail(head);

    // head=removekth(head,2);

    // deltenode(head->next->next);

    //insertion

    // head=insertbeforehead(head,10);

    // head=insertbefortail(head,10);

    // head=insertbeforekth(head,3,10);

    insertbefornode(head->next,100);

    print(head);
    return 0;
}

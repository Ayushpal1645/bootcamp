#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

public:
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }

    // multiple costrictor
public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

node *converarr2ll(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

// length of ll
int lengthOfLL(node *head)
{
    int cnt = 0;
    node *temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }

    return cnt;
}

// print ll
void print(node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// search in ll
int checkIfPresent(node *head, int val)
{
    node *temp = head;
    while (temp)
    {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    }
    return 0;
}

// delete the head
node *removehead(node *head)
{
    if (head == NULL)
        return head;
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

// delete the last node
node *removetail(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;

    return head;
}

// remove specific position node
node *removeposition(node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    node *temp = head;
    node *prev = NULL;
    while (head != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// remove node by value
node *removevalue(node *head, int el)
{
    if (head == NULL)
        return head;
    if (head->data == el)
    {
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    node *temp = head;
    node *prev = NULL;
    while (head != NULL)
    {
        if (temp->data == el)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}



//INSERSTION

//head
node* inserthead(node* head, int value){
    node* temp=new node(value,head);
    return temp;
}


//last
node* insertlast(node* head, int value){
    if(head==NULL){
        return  new node(value);
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* newnode=new node(value);
    temp->next=newnode;
    return head;
}


//position
node* insertposition(node* head, int el, int k){
    if(head==NULL){
       if(k==1){
        return new node(el);
       }
       else{
        return head;
       }
    }
    if(k==1){
        node* newhead=new node(el,head);
        return newhead;
    }
    int cnt=0;
    node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            node* x=new node(el);//node*x =new node(el,temp->next);aise bhi likh skte hai 
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}



//value
node* insertbeforevalue(node* head, int el, int val){
    if(head==NULL){
       return NULL;
       }
      
    if(head->data==val){
        node* newhead=new node(el,head);
        return newhead;
    }

    node* temp=head;
    while(temp->next!=NULL){
        
        if(temp->next->data==val){
            node* x=new node(el);//node*x =new node(el,temp->next);aise bhi likh skte hai 
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}


int main()
{
    vector<int> arr = {2, 5, 8, 7};
    node *head = converarr2ll(arr);
    //  head=removehead(head);
    //  head=removetail(head);

    //    head=removeposition(head,3);
    // head = removevalue(head, 7);


    // head=insertlast(head,100);

    // head=insertposition(head,100,3);

    head=insertbeforevalue(head,100,8);

    print(head);

    return 0;
}

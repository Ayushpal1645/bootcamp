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

node* deletePosition(node* head, int pos)
{
    if(head == NULL)
        return NULL;

    // delete head
    if(pos == 1)
    {
        node* temp = head;
        head = head->next;

        if(head != NULL)
            head->back = NULL;

        delete temp;
        return head;
    }

    node* temp = head;
    int cnt = 1;

    while(temp != NULL && cnt < pos)
    {
        temp = temp->next;
        cnt++;
    }

    // invalid position
    if(temp == NULL)
        return head;

    node* prev = temp->back;
    node* front = temp->next;

    if(prev != NULL)
        prev->next = front;

    if(front != NULL)
        front->back = prev;

    delete temp;

    return head;
}


int main()
{
    vector<int> arr = {12, 5, 8, 7};
    node *head = convertarr2dll(arr);

    // head=deletehead(head);

    head=deletetail(head);
    print(head);
    return 0;
}

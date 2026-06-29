#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
    public:
      node(int data1)  {
         data=data1;
         next=nullptr;
      }
};
node* converarr2ll(vector<int> &arr)
{
    if (arr.empty())
        return NULL;

    node* head = new node(arr[0]);
    node* mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

node* deleteAtPosition(node* head, int pos)
{
    if (head == NULL)
        return NULL;

    // Delete first node
    if (pos == 1)
    {
        // Only one node
        if (head->next == head)
        {
            delete head;
            return NULL;
        }

        node* last = head;
        while (last->next != head)
            last = last->next;

        node* temp = head;
        head = head->next;
        last->next = head;

        delete temp;
        return head;
    }

    // Move to previous node
    node* prev = head;
    for (int i = 1; i < pos - 1; i++)
    {
        prev = prev->next;

        // Position greater than length
        if (prev == head)
            return head;
    }

    node* temp = prev->next;

    // Position greater than length
    if (temp == head)
        return head;

    prev->next = temp->next;
    delete temp;

    return head;
}
 void print(node* head){
    while (head)
    {
        cout<<head->data<<" -> ";
        head=head->next;
    }
    
    
 }
 int main(){
    vector <int> arr={1,2,3,4,5};
    node* head=converarr2ll(arr);
    head=deleteAtPosition( head,3);
    print(head);
    return 0;
 }
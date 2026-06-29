#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }

    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

// Array to Linked List
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

// Singly to Circular Linked List
node* singlytocircular(node* head)
{
    if (head == NULL)
        return NULL;

    node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = head;

    return head;
}

// Print Circular Linked List
void printCircular(node* head)
{
    if (head == NULL)
        return;

    node* temp = head;

    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(head)" << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};

    node* head = converarr2ll(arr);

    head = singlytocircular(head);

    printCircular(head);

    return 0;
}
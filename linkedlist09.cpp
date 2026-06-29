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

// Create Cycle (Tail -> Head)
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

// Detect Cycle
bool hasCycle(node* head)
{
    node* slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    node* head = converarr2ll(arr);

    // Uncomment this line to create a cycle
    head = singlytocircular(head);

    if (hasCycle(head))
        cout << "Cycle Detected";
    else
        cout << "No Cycle";

    return 0;
}
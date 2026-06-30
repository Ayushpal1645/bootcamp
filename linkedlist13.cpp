#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

// Convert Array to Linked List
node* convertArr2LL(vector<int> &arr)
{
    if(arr.empty()) return nullptr;

    node *head = new node(arr[0]);
    node *temp = head;

    for(int i = 1; i < arr.size(); i++)
    {
        temp->next = new node(arr[i]);
        temp = temp->next;
    }

    return head;
}

// Find Middle Node
node* middleNode(node *head)
{
    if(head == nullptr)
        return nullptr;

    node *slow = head;
    node *fast = head;

    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    node *head = convertArr2LL(arr);

    node *mid = middleNode(head);

    cout << "Middle Node: " << mid->data << endl;

    return 0;
}
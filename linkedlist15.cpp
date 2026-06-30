#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// Array to Linked List
node* convertArr2LL(vector<int> &arr)
{
    if(arr.empty()) return NULL;

    node *head = new node(arr[0]);
    node *temp = head;

    for(int i=1;i<arr.size();i++)
    {
        temp->next = new node(arr[i]);
        temp = temp->next;
    }

    return head;
}

// Print Linked List
void printLL(node *head)
{
    while(head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Remove every Kth node
node* removeEveryKthNode(node *head, int k)
{
    if(head == NULL) return NULL;

    if(k == 1)
    {
        while(head)
        {
            node *temp = head;
            head = head->next;
            delete temp;
        }
        return NULL;
    }

    node *curr = head;
    node *prev = NULL;
    int count = 1;

    while(curr)
    {
        if(count == k)
        {
            prev->next = curr->next;

            node *temp = curr;
            curr = curr->next;
            delete temp;

            count = 1;
        }
        else
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
    }

    return head;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    node *head = convertArr2LL(arr);

    cout << "Original List: ";
    printLL(head);

    int k = 3;

    head = removeEveryKthNode(head, k);

    cout << "After Removing Every " << k << "rd Node: ";
    printLL(head);

    return 0;
}
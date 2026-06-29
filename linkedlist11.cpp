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

// Array to Linked List
node* convertArr2LL(vector<int> &arr)
{
    if (arr.empty()) return nullptr;

    node *head = new node(arr[0]);
    node *temp = head;

    for (int i = 1; i < arr.size(); i++)
    {
        temp->next = new node(arr[i]);
        temp = temp->next;
    }

    return head;
}

// Print Linked List
void printLL(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Merge Two Sorted Lists
node* mergeTwoLists(node *list1, node *list2)
{
    node *t1 = list1;
    node *t2 = list2;

    node *dummy = new node(-1);
    node *temp = dummy;

    while (t1 != nullptr && t2 != nullptr)
    {
        if (t1->data < t2->data)
        {
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }
        else
        {
            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }
    }

    if (t1)
        temp->next = t1;
    else
        temp->next = t2;

    return dummy->next;
}

int main()
{
    vector<int> arr1 = {1, 2, 4};
    vector<int> arr2 = {1, 3, 4};

    node *list1 = convertArr2LL(arr1);
    node *list2 = convertArr2LL(arr2);

    cout << "List 1: ";
    printLL(list1);

    cout << "List 2: ";
    printLL(list2);

    node *merged = mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printLL(merged);

    return 0;
}
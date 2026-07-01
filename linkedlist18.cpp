#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* removeEven(Node* head)
{
    // Remove even nodes from beginning
    while (head != NULL && head->data % 2 == 0)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    if (head == NULL)
        return NULL;

    Node* curr = head;

    while (curr->next != NULL)
    {
        if (curr->next->data % 2 == 0)
        {
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }

    return head;
}

void printLL(Node* head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    vector<int> arr = {2, 5, 8, 7, 4, 9, 10};

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for (int i = 1; i < arr.size(); i++)
    {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    head = removeEven(head);

    printLL(head);

    return 0;
}
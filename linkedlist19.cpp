#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int data)
    {
        val = data;
        next = NULL;
        random = NULL;
    }
};

// Convert Array to Linked List
Node *convertArrToLL(vector<int> &arr)
{
    if (arr.empty())
        return NULL;

    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < arr.size(); i++)
    {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    return head;
}

// Clone Linked List with Random Pointer
Node *copyRandomList(Node *head)
{
    if (head == NULL)
        return NULL;

    // Step 1: Insert copy nodes
    Node *temp = head;

    while (temp != NULL)
    {
        Node *nextElement = temp->next;

        Node *copy = new Node(temp->val);

        copy->next = nextElement;
        temp->next = copy;

        temp = nextElement;
    }

    // Step 2: Connect random pointers
    temp = head;

    while (temp != NULL)
    {
        Node *copyNode = temp->next;

        if (temp->random != NULL)
            copyNode->random = temp->random->next;
        else
            copyNode->random = NULL;

        temp = temp->next->next;
    }

    // Step 3: Separate both lists
    Node *dummy = new Node(-1);
    Node *res = dummy;

    temp = head;

    while (temp != NULL)
    {
        res->next = temp->next;
        res = res->next;

        temp->next = temp->next->next;
        temp = temp->next;
    }

    return dummy->next;
}

// Print Linked List
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << "Node: " << head->val << " ";

        if (head->random)
            cout << "Random: " << head->random->val;
        else
            cout << "Random: NULL";

        cout << endl;

        head = head->next;
    }
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};

    Node *head = convertArrToLL(arr);

    // Store pointers for assigning random links
    vector<Node *> nodes;
    Node *temp = head;

    while (temp)
    {
        nodes.push_back(temp);
        temp = temp->next;
    }

    // Assign random pointers manually
    nodes[0]->random = nodes[2]; // 10 -> 30
    nodes[1]->random = nodes[0]; // 20 -> 10
    nodes[2]->random = nodes[3]; // 30 -> 40
    nodes[3]->random = nodes[1]; // 40 -> 20

    cout << "Original Linked List:\n";
    printList(head);

    Node *clone = copyRandomList(head);

    cout << "\nCloned Linked List:\n";
    printList(clone);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *back;

    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

// Convert array to DLL
node* convertArrToDLL(vector<int> &arr)
{
    if (arr.empty()) return nullptr;

    node* head = new node(arr[0]);
    node* prev = head;

    for(int i = 1; i < arr.size(); i++)
    {
        node* temp = new node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }

    return head;
}

// Print DLL
void printDLL(node* head)
{
    while(head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Update value at given index (0-based)
node* updateAtIndex(node* head, int index, int newValue)
{
    if(head == nullptr)
        return head;

    node* temp = head;
    int cnt = 0;

    while(temp != nullptr)
    {
        if(cnt == index)
        {
            temp->data = newValue;
            return head;
        }

        temp = temp->next;
        cnt++;
    }

    cout << "Index out of range!" << endl;
    return head;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    node* head = convertArrToDLL(arr);

    cout << "Original DLL: ";
    printDLL(head);

    head = updateAtIndex(head, 2, 99);

    cout << "Updated DLL: ";
    printDLL(head);

    return 0;
}
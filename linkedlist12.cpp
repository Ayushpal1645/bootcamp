#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

bool isPalindrome(Node *head)
{
    stack<int> st;

    Node *temp = head;

    // Push all elements into stack
    while (temp)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    // Compare with stack
    temp = head;
    while (temp)
    {
        if (temp->data != st.top())
            return false;

        st.pop();
        temp = temp->next;
    }

    return true;
}

int main()
{
    // 1 -> 2 -> 3 -> 2 -> 1
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    if (isPalindrome(head))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
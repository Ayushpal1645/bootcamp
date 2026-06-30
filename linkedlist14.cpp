// ~
// Create an empty unordered_set.
// Traverse the linked list.
// For each node:
// If its value is not in the set:
// Insert it into the set.
// Move ahead.
// If its value is already present:
// Remove the duplicate node.
// Continue until the end of the list.
// Time Complexity
// O(n)
// Space Complexity
// O(n)
// VS Code (C++)
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Array to Linked List
Node* convertArrToLL(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    return head;
}

// Remove Duplicates from Unsorted Linked List
Node* removeDuplicates(Node* head) {

    if (head == nullptr) return head;

    unordered_set<int> st;

    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr) {

        if (st.find(temp->data) != st.end()) {
            // Duplicate found
            prev->next = temp->next;
            Node* duplicate = temp;
            temp = temp->next;
            delete duplicate;
        }
        else {
            st.insert(temp->data);
            prev = temp;
            temp = temp->next;
        }
    }

    return head;
}

// Print Linked List
void printLL(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    vector<int> arr = {1, 3, 2, 3, 4, 1, 5, 2};

    Node* head = convertArrToLL(arr);

    cout << "Original List: ";
    printLL(head);

    head = removeDuplicates(head);

    cout << "After Removing Duplicates: ";
    printLL(head);

    return 0;
}
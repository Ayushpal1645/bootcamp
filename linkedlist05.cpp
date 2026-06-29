#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }

   
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* t1 = l1;
        ListNode* t2 = l2;

        ListNode* dummyNode = new ListNode(-1);
        ListNode* curr = dummyNode;

        int carry = 0;

        while (t1 != NULL || t2 != NULL) {

            int sum = carry;

            if (t1)
                sum += t1->val;

            if (t2)
                sum += t2->val;

            carry = sum / 10;

            curr->next = new ListNode(sum % 10);
            curr = curr->next;

            if (t1)
                t1 = t1->next;

            if (t2)
                t2 = t2->next;
        }

        if (carry)
            curr->next = new ListNode(carry);

        return dummyNode->next;
    }
};

// Function to create a linked list
ListNode* createList(vector<int> arr) {
    if (arr.empty()) return NULL;

    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }

    return head;
}

// Function to print a linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> a = {2, 4, 3};
    vector<int> b = {5, 6, 4};

    ListNode* l1 = createList(a);
    ListNode* l2 = createList(b);

    Solution obj;
    ListNode* ans = obj.addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(ans);

    return 0;
}
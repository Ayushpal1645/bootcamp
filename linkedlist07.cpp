#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

public:
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }

    // multiple costrictor
public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

node *converarr2ll(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

int countoccur(node* head,int key){
    node* temp=head;
    int cnt=0;
    while(temp){
        if(temp->data==key){
            cnt++;
        }
        temp=temp->next;
    }
    return cnt;

}

// print ll
void print(node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
    vector <int> arr={1,2,3,4,2,2,5,2};
    node* head=converarr2ll(arr);

  
  cout<<countoccur(head,2);
 
 return 0;
    
}
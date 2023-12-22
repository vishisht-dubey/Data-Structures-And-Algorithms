#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *next;
    Node(int x)
    {
        key = x;
        next = NULL;
    }
};

void printSingleLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->key << " ";
        temp = temp->next;
    }
    cout << endl;
    return;
}

// insertion in a linked list
Node *insertAtAnyPosition(Node *head, int &size, int target, int position)
{
    position = position - 1;
    if (position < 0 || position > size)
    {
        cout << "Invalid Position" << endl;
        return NULL;
    }
    else
    {
        Node *temp = new Node(target);
        if (position == 0)
        {
            temp->next = head;
            head = temp;
            size++;
            return head;
        }
        Node *curr = head;
        for (int i = 0; i < position - 1 && curr != NULL; i++)
        {
            curr = curr->next;
        }
        if (curr == NULL)
            return head;
        temp->next = curr->next;
        curr->next = temp;
        size++;
        return head;
    }
}

// reversing a linked list
Node *reverseALinkedLists(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *prev = NULL;
    Node *temp = head;
    Node *succ = head;
    while (temp != NULL)
    {
        /* code */
        succ = temp->next;
        temp->next = prev;
        prev = temp;
        temp = succ;
    }
    head = prev;
    return head;
}

// deletion in a linked list
Node *deleteALinkedList(Node *head, int x)
{
    if(head==NULL)
    return head;
    if(x==1)
    {
        Node *temp = head;
        head=head->next;
        delete temp;
        return head;
    }
    Node *temp = head;
    for(int i=1;i<x-1;i++){
        temp=temp->next;
    }
    Node* del= temp->next;
    temp->next=temp->next->next;
    delete del;
    return head;
}

// Detecting a loop in a Linked List
bool isLoopPresent(Node *head){
    if(head==NULL)
    return false;
    Node *fast = head->next;
    Node *slow = head;
    while(fast!=slow){
        if(fast==NULL||fast->next==NULL)
        return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    return true;
}

// removing a loop
// Floyd's Cycle Detection Algorithm
void removeALoop(Node *head){
      Node *slow = head;
       Node *fast = head->next;
       int count = 1;
       while(fast!=slow){
           if(fast==NULL||fast->next==NULL)
           return ;
            slow=slow->next;
            fast=fast->next->next;
       }
       fast = fast->next;
       while(slow!=fast){
           fast=fast->next;
           count++;
       }
       slow=head;
       fast=head;
       for(int i=0;i<count-1;i++){
           fast=fast->next;
       }
       while(fast->next!=slow){
           slow = slow->next;
           fast = fast->next;
       }
       fast->next = NULL;
       return ;
}

int main()
{
    Node *root = new Node(45);
    root->next = new Node(49);
    root->next->next = new Node(34);
    root->next->next->next = new Node(67);
    root->next->next->next->next = new Node(30);
    // Node *head =/ NULL;
    int size = 5;
    // insertAtAnyPosition(root, size, 31, 1);
    // insertAtAnyPosition(root, size, 69, 4);
    // insertAtAnyPosition(root, size, 89, 5);
    // // cout << size << endl;
    // printSingleLinkedList(root);
    // Node *reverseResult = reverseALinkedLists(root);
    // printSingleLinkedList(reverseResult);
    Node *res=deleteALinkedList(root, 2);
    printSingleLinkedList(res);
    return 0;
}
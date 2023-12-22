// Doubly Linked Lists
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *next;
    Node(int k)
    {
        key = k;
    }
};

// print a circular linked lists
void printCLL(Node *head)
{
    Node *temp = head;
    int visited = -1;
    while (temp->key != visited)
    {
        if (visited == -1)
        {
            visited = temp->key;
        }
        cout << temp->key << " ";
        temp = temp->next;
    }
    cout << endl;
}

// delete a node in a circular linked lists
void deleteCLL(Node **head, int data)
{
    int visited = -1;
    Node *temp = *head;
    Node *prev = NULL;
    while (temp->key != data && visited != temp->key)
    {
        if (visited == -1)
        {
            visited = temp->key;
        }
        prev = temp;
        temp = temp->next;
    }
    if (temp->key != data && visited == temp->key)
    {
        cout << "Node Not Present" << endl;
        return;
    }
    Node *dummy = temp;
    prev->next = temp->next;
    temp = prev;
    dummy->next = NULL;
    delete dummy;
    return;
}

// insert a node in a circular linked lists after a given node
void insertAfterCLL(Node **head, Node *temp, int target)
{
    Node *dummy = *head;
    while (dummy->key != temp->key)
    {
        dummy = dummy->next;
    }
    Node *x = new Node(target);
    Node *prev = dummy->next;
    dummy->next = x;
    x->next = prev;
    return;
}

int main()
{
    Node *temp = new Node(10);
    temp->next = new Node(20);
    temp->next->next = new Node(30);
    temp->next->next->next = new Node(40);
    temp->next->next->next->next = temp;
    printCLL(temp);
    deleteCLL(&temp, 35);
    printCLL(temp);
    insertAfterCLL(&temp, temp->next->next->next, 32);
    printCLL(temp);

    return 0;
}
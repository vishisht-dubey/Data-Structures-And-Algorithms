// Doubly Linked Lists
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *prev;
    Node *next;
    Node(int x)
    {
        key = x;
        prev = NULL;
        next = NULL;
    }
};

void insertFront(struct Node **head, int data)
{

    Node *newNode = new Node(data);
    newNode->next = (*head);
    newNode->prev = NULL;
    if ((*head) != NULL)
        (*head)->prev = newNode;
    (*head) = newNode;
}
void insertAfter(Node *prev_node, int data)
{

    if (prev_node == NULL)
    {
        cout << "previous node cannot be null";
        return;
    }

    // allocate memory for newNode
    Node *newNode = new Node(data);
    newNode->next = prev_node->next;
    prev_node->next = newNode;
    newNode->prev = prev_node;
    if (newNode->next != NULL)
        newNode->next->prev = newNode;
}

void insertEnd(struct Node **head, int data)
{

    Node *newNode = new Node(data);
    newNode->next = NULL;
    Node *temp = *head;
    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

Node *reverseDLL(Node *head)
{

    if (head == NULL)
        return head;
    Node *current = head;
    Node *previous = NULL;
    // Node *next = current->next;
    while (current != NULL)
    {
        previous = current->prev;
        current->prev = current->next;
        current->next = previous;
        current = current->prev;
    }
    return previous->prev;
}

// delete a node in a doubly linked list
Node *deleteNode(Node *head_ref, int x)
{
    // Your code here
    if (x == 1)
    {
        Node *temp = head_ref;
        head_ref = head_ref->next;
        head_ref->prev = NULL;
        temp->next = NULL;
        delete temp;
        return head_ref;
    }
    else
    {
        Node *prev = NULL;
        Node *temp = head_ref;
        for (int i = 1; i < x; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            prev->next = NULL;
            temp->prev = NULL;
            delete temp;
            return head_ref;
        }
        Node *dummy = temp;
        temp = temp->next;
        prev->next = temp;
        temp->prev = prev;
        dummy->next = NULL;
        dummy->prev = NULL;
        delete dummy;
        return head_ref;
    }
}

void printDLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->key << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{

    Node *head = new Node(30);
    head->next = new Node(40);
    head->prev = NULL;
    head->next->next = new Node(50);
    head->next->prev = head;
    head->next->next->next = new Node(60);
    head->next->next->prev = head->next;
    head->next->next->next->next = new Node(70);
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next->prev = head->next->next->next;
    // printDLL(head);
    Node *temp = head;
    int size = 5;
    // insert At Begin
    // insertFront(&head, 20);
    // printDLL(head);
    // // insert At Middle
    // insertAfter(head->next->next, 45);
    // printDLL(head);
    // // insert At End
    // insertEnd(&head, 80);
    // printDLL(head);

    // reversing a doubly linked lists
    // Node *reverse_head = reverseDLL(head);
    // printDLL(reverse_head);
    Node *p1 = deleteNode(head,1);
    printDLL(p1);
    return 0;
}
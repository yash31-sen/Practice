// linear data structure store data in multiple blocks those are conected to each other
/*
memory allocation non-contiguos
insertion deletion constly


-------
block of memory is called node that contain -> data and pointer to next node.
every node has address of its next node not of others
head pointer stores the address of first node
in the last node of lined list next is ponited to null
*/

// create a linked list
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next; // next is pointer variable because it is pointing to the address of next node
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// inserting into the linked list at tail
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);//created node
    if (head == NULL)//if no element present 
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)//if element present then reach to the last element 
    {
        temp = temp->next;
    }

    temp->next = n;
}

// 1 2 3 4 5  ::7  :: 7->next=1 :: head=7;
// insert at head
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);//created new node 
    //initially n->next doesn't point to any node change change it to head and thjen head to n 
    n->next = head;
    head = n;
}

// insert in between the linked list
void insertBtw(node *head, int val, int val1)
{
    node *cur = head;
    node *n = new node(val);
    while (cur != NULL)
    {
        if (cur->data == val1)
        {
            cur->next = n;
            n->next = cur->next->next;
        }
        cur = cur->next;
    }
}

void display(node *head)
{ //*****here are taking head pointer as value so if didn't take other pointer temp to traversethe linked list it will node change the value or position of head pointer in the actual linked list.
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

bool searchList(node *head, int key)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
}

// recursive way
//  ???????
node *revRev(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newHead = revRev(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

// iterative way of reversing the linkedlist
node *revList(node *&head)
{
    node *prev = NULL; // because prev is new head of the reversed linked list and at the last it has to point to the NULL
    node *next;
    node *cur = head;
    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;

        prev = cur;
        cur = next;
    }
    return prev;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertBtw(head, 34, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtHead(head, 7);

    // cout<<searchList(head,58)<<endl;
    display(head);
    node *newHead = revRev(head);
    cout << endl;
    display(newHead);
    return 0;
}
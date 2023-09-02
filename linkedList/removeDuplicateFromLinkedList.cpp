// remove duplicates form a sorted linkedlist

#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *cur = head;
    while (cur->next != NULL)
    {
        cur = cur->next; /* code */
    }
    cur->next = n;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void deleteNode(node *head, int val)
{
    node *cur = head;
    while (cur != NULL)
    {
        if (cur->data == val)
        {
            cur = cur->next;
            delete (cur);
        }
        cur = cur->next;
    }
}

void display(node *head)
{
    node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << "->";
        cur = cur->next;
    }
    cout << "NULL";
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 3);
    insertAtTail(head,3);
    insertAtTail(head,3);
    insertAtTail(head,3);

    insertAtHead(head, 6);
    deleteNode(head, 3);
    display(head);
    return 0;
}
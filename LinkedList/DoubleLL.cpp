#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
    Node *prev;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    };
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory freed for Node with data: " << val << endl;
    };
};
void DeleteNode(Node *&head, Node *&tail, int p)
{
    if (p == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int c = 1;
        while (c < p)
        {
            prev = curr;
            curr = curr->next;
            c++;
        }
        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int len(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void InsertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void InsertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}
void InsertAtPos(Node *&head, Node *&tail, int p, int d)
{
    if (p == 1)
    {
        InsertAtHead(head, tail, d);
        return;
    }
    Node *temp = head;
    int c = 1;
    while (c < p - 1)
    {
        c++;
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        InsertAtTail(tail, head, d);
        return;
    }
    Node *node = new Node(d);
    node->next = temp->next;
    temp->next->prev = node;
    node->prev = temp;
    temp->next = node;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    InsertAtHead(head, tail, 5);
    InsertAtTail(tail, head, 15);
    InsertAtPos(head, tail, 4, 13);
    print(head);
    DeleteNode(head, tail, 4);
    print(head);
    cout << len(head) << endl;
    cout << tail->data << endl;
}

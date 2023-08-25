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
        this->next = NULL;
    }
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void DeleteNode(Node *&head, int p)
{
    if (p == 1)
    {
        Node *temp = head;
        head = head->next;
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
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void InsertAtPosition(Node *&head, Node *&tail, int p, int d)
{
    if (p == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int c = 1;
    while (c < p - 1)
    {
        temp = temp->next;
        c++;
    }
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
    Node *node2 = new Node(d);
    node2->next = temp->next;
    temp->next = node2;
}

void print(Node *&head)
{
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    InsertAtTail(tail, 12);
    InsertAtHead(head, 5);
    InsertAtPosition(head, tail, 4, 22);
    DeleteNode(head, 1);

    print(head);
    cout << endl
         << tail->data;
}
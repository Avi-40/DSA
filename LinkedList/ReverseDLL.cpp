#include <bits/stdc++.h>
using namespace std;


    class Node
    {
    public:
        int data;
        Node *next;
        Node *prev;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
             this->prev = NULL;
        }
    };



void reverse(Node *&head,Node*&tail) 
{
    tail=head;
    Node *temp=NULL;
    Node *curr=head;
    Node *forw=NULL;
    while(NULL!=curr){
        forw=curr->next;
        curr->prev=curr->next;
        curr->next=temp;
        temp=curr;
        curr=forw;
    }
    head=temp;
    
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
void print(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void print1(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    InsertAtHead(head, tail, 5);
    InsertAtTail(tail, head, 15);
    InsertAtPos(head, tail, 4, 13);
    print1(head);
    print(tail);
    reverse(head,tail);
    print1(head);
    cout << head->data << endl;
}
#include<bits/stdc++.h>
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
    };

void insert(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
}

Node* sortList(Node *head)
{
    Node* zeroH=new Node(-1);
    Node* zeroT=zeroH;
    Node* oneH=new Node(-1);
    Node* oneT=oneH;
    Node* twoH=new Node(-1);
    Node* twoT=twoH;

    Node* curr=head;
    while(curr!=NULL){
        int value =curr->data;

        if(value==0){
            insert(zeroT,curr);
        }
        else if (value==1){
            insert(oneT,curr);
        }
        else if(value==2){
            insert(twoT,curr);
        }
        curr=curr->next;

    }

    if(oneH->next!=NULL){
        zeroT->next=oneH->next;
    }
    else{
        zeroT->next=twoH->next;
    }
    oneT->next=twoH->next;
    twoT->next=NULL;

    head=zeroH->next;
    
    delete zeroH;
    delete oneH;
    delete twoH;

    return head;
}

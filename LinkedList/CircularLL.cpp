#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;

    };
    ~Node(){
        int val=this->data;
        while(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout << "Memory freed for Node with data: " << val << endl;
    };
};
void insertAtelemPos(Node* &tail,int elem,int d){
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next=temp;
    }
    else{
        Node* curr=tail;
        while(curr->data!=elem){
            curr=curr->next; 
        }
        Node* temp= new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}
void deleteNode(Node* &tail,int elem){
    if(tail==NULL){
        cout<<"List is Empty"<<endl;
    }
    else{
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=elem){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //1 LL
        if(curr==prev){
            tail=NULL;
        }
        //>=2 LL
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
void print(Node* tail){
     if(tail==NULL){
        cout<<"List is Empty"<<endl;
     }
     else{
        Node* temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(tail!=temp); 
    cout<<endl;

     }
    
}
int main(){
    Node* tail=NULL;

    insertAtelemPos(tail,5,3);
    deleteNode(tail,3);
    print(tail);

     insertAtelemPos(tail,3,4);
    print(tail);
    
     insertAtelemPos(tail,4,5);
    print(tail);

     insertAtelemPos(tail,5,6);
    print(tail);

}



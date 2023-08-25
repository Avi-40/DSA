#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* link;
public:
    Node(int d){
        this->data=d;
        this->link=NULL;
    }
};
class stackLL
{
   Node* top;
public:
    stack(){top=NULL;}
    void push(int d){
        Node* temp= new Node(d);
        temp->link=top;
        top=temp;
        
    }
    bool isempty(){
        return top==NULL;
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* temp=top;
        top=temp->link;
        cout<<"Popped: "<<temp->data<<endl;
        free(temp);
    }

    void peek(){
        if(!isempty()){
            cout<<top->data<<endl;
            return;
        }
        cout<<"Stack is empty"<<endl;
        
    }
    
};

int main(){
    stackLL s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);

   
    s.pop();
    s.pop();

    s.peek();
 
}



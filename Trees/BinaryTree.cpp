#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;
    root=new node(data);
    
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for left node of "<< data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter data for Right node: "<< data<<endl;
    root->right=buildtree(root->right);
    return root;

}

void lvltrev(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void inorder(node* root){
    if(root==NULL){
        return ;
    }
    node* temp=root;
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
void postorder(node* root){
    if(root==NULL){
        return ;
    }
    node* temp=root;
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
    
}
void preorder(node* root){
    if(root==NULL){
        return ;
    }
    node* temp=root;
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
    
    
}
void inorder1(node* root){
    stack<node*> s;
    node *temp=root;

    while(temp || !s.empty()){
        while(temp){
            s.push(temp);
            temp=temp->left;
        }
        temp=s.top();
        cout<<temp->data<<" ";
        s.pop();

        temp=temp->right;
    }
}
void preorder1(node* root){
    stack<node*> s;
    node *temp;
    s.push(temp);

    while(temp || !s.empty()){
        temp=s.top();
        s.pop();
        cout<<temp->data<<" ";
        if(temp->right){
            s.push(temp->right);
        }
        if(temp->left){
            s.push(temp->left);
        }
        
    }
}
void postorder1(node* root){
    stack<node*> s;
    node *temp;
    s.push(temp);

    while(!s.empty()){
        if(temp){
            s.push(temp);
            temp=temp->left;
        }
        temp=s.top();
        if(temp->right){
            s.push(temp);
            temp=temp->right;
        }
        temp=s.top();
        cout<<temp->data<<" ";
        s.pop();

        
    }
}
int main(){
    node* root=NULL;
    root=buildtree(root);
    postorder1(root);
    return 0;

}


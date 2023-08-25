#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insert(Node* root,int d){
    if(root==NULL){
        root = new Node(d);
        return root;
    }
    if(d>root->data){
        root->right=insert(root->right,d);
    } else {
        root->left=insert(root->left,d);
    }
    return root;
}
void takeinput(Node* &root){
    int d;
    cin>>d;
    while(d!=-1){
        root = insert(root,d);
        cin>>d;
    }
}

void lvltrev(Node* &root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
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
Node* minVal(Node* root){
    if(root==NULL){
        return root;
    }
    while(root->left){
        root=root->left;
    }
    return root;
}

Node* deleteNode(Node* root,int d){
    if(root==NULL){
        return root;
    }
    if(root->data==d){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minVal(root->right)->data;
            root->data=mini;
            root->right=deleteNode(root->right,mini);
            return root;
        }
    }
    if(root->data>d){
        root->left= deleteNode(root->left,d);
    }
    else{
        root->right= deleteNode(root->right,d);
    }
    return root;
}

int main(){
    Node* root=NULL;
    cout<<"Enter the values for BST-->";
    takeinput(root);
    root = deleteNode(root,30);
    lvltrev(root);
}

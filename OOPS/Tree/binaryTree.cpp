/* Binary Tree */

#include <iostream>
#include <queue>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

void preOrder(Node* root){

    if(root){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node* root){

    if(root){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

void postOrder(Node* root){

    if(root){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

void levelOrder(Node* root){

    if(!root) return;

    Node* temp;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

int search(Node* root,int data){
    
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->right->left = new Node(6);

    cout<<"Inorder traversal : ";
    inOrder(root);
    cout<<endl;

    cout<<"Preorder traversal : ";
    preOrder(root);
    cout<<endl;

    cout<<"Postorder traversal : ";
    postOrder(root);
    cout<<endl;

    levelOrder(root);

    return 0;
}
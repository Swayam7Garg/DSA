#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(){
        data = 0;
        left = right = nullptr;
    }

    Node(int val){
        data = val;
        left = right =nullptr;
    }

    Node(int val , Node* left , Node * right){
        data = val;
        this->left = left;
        this->right = right;
    }

};
void inorder(Node* root){
    if(root == nullptr){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    // root left right
    if(root == nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node * root){
    // left right root
    if(root == nullptr){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<"Inorder Traversal: ";
    inorder(root);
    cout<<"Preorder Traversal: ";
    preorder(root);
    cout<<"Postorder Traversal: ";
    postorder(root);

    return 0;
}
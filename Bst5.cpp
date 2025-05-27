//inserting a node in a BST
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

Node* insertingNode(Node* root , int val){
    if(root == NULL){
        return new Node(val);
    }
    Node* curr = root;
    while(true){
        if(curr-> data < val){
            if(curr -> right != NULL){
                curr = curr -> right;
            }
            else{
                curr->right = new Node(val);
                break;
            }
        }
        else{
            if(curr -> left != NULL){
                curr = curr -> left;
            }
            else{
                curr -> left = new Node(val);
                break;
            }
        }
    }
    return root;
}
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(13);
    root->left->right = new Node(9);
    root->left->left = new Node(5);
    root->right->right = new Node(16);
    root->right->right->left = new Node(15);
    root->right->left = new Node(11);
    
    Node* ans = insertingNode(root, 12);
    inorder(ans);
    return 0;
}
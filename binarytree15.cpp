//lowest common ansestor
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val) , left(NULL) , right(NULL) {}
};

Node* lca(Node* root , Node* p , Node * q){
    if(root == NULL || q == root || p == root){
        return root;
    }

    Node * left = lca(root->left , p , q);
    Node* right = lca(root->right , p , q);

    if(left == NULL){
        return right;
    }
    else if(right == NULL){
        return left;
    }
    else{
        return root;
    }
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    root->right ->right->left = new Node(7);
    root->right->left = new Node(8);
     
    Node * ans = lca(root ,root->left->left  ,root->right ->right->left );
    cout<<ans->data;
    return 0;
}
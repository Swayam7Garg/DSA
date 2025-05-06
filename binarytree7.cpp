#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(){
        data = 0;
        left  = right = nullptr;
    }
    Node(int val){
        data = val;
        left = right = nullptr;
    }
    Node(int val ,Node* left , Node* right){
        data = val;
        left = left; 
        right = right;
    }
};

//height of binary tree

int heightofbinarytree(Node* root){
    if(root == NULL){
        return 0;
    }
    
    int lh = heightofbinarytree(root->left);
    int rh = heightofbinarytree(root->right);
    return 1 + max(lh , rh);

}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);   
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int ans = heightofbinarytree(root);
    cout<<ans;
    return 0;
}
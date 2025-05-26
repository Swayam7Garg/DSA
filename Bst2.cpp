//ceil of a binary search tree which is the number itself or the imediately greater number than input number or the key
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val) , left(nullptr) , right(nullptr)  {}
};

int ceilBST(Node* root , int key){
    int ceil = -1;
    while(root){
        if(root -> data == key){
            ceil = root->data;
            return ceil;
        }
        if(key > root->data){
            root = root -> right;
        }
        else{
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil;
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

    int ans = ceilBST(root , 14);
    cout<<"Ceil of the given BST is :"<<ans<<endl;
    return 0;
}
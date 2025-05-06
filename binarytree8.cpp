//checking if balanced binary tree or not
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
int balancedbt(Node* root);
bool checkbalancedbt(Node* root){
    return balancedbt(root) != -1;
}

int balancedbt(Node* root){
    if(root == NULL){
        return 0 ;
    }
    int lh = balancedbt(root->left);
    if(lh == -1) return -1;

    int rh = balancedbt(root->right);
    if(rh == -1) return -1;

    if(abs(lh - rh) > 1) return -1;
    return max(lh , rh) + 1;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);   
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    bool ans = checkbalancedbt(root);
    cout<<ans;
    
    return 0;
}
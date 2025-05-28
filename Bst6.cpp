// lowest common ancestor
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node * right;

    Node(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

Node* lowestancestor(Node * root , Node * p , Node * q){
    if( root == NULL) return NULL;
    int curr = root-> data;
    if(curr < p-> data && curr < q-> data){
        return lowestancestor(root -> right , p , q);
    }
    if(curr > p->data && curr > q-> data){
        return lowestancestor(root->left , p ,q);
    }
    return root;
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
    Node* ans = lowestancestor(root ,root->left->left ,root->right->right->left);
    cout<<ans->data;
    return 0;
}
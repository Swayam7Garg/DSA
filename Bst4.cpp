//optimal code for the kth smallest value in the binary search tree
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

void Inorder(Node* root , vector<int> & arr){
    //base case
    if(root == NULL){
        return ;
    }

    Inorder(root-> left , arr);
    arr.push_back(root->data);
    Inorder(root->right ,arr);
    return ;
}
int Kthsmallest(Node* root , int k){
    // by inorder 
    vector<int> arr;
    Inorder(root , arr);

    return arr[k-1];
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
    int k;
    cout<<"enter the k value : "<<endl;
    cin>>k;
    int ans = Kthsmallest(root ,k);
    cout<<"the smallest kth value in this binarysearchtree is  "<<ans;
    return 0;
}
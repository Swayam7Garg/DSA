//floor of the binary search tree ->Floor of a value refers to the value of the largest node in the Binary Search Tree that is smaller than or equal to the given key
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

int floorBST(Node* root , int x){
    int floor = -1;
    while(root){
        if(root -> data == x){
            floor = root->data;
            return floor;
        }
        if(x > root->data){
            floor = root -> data;
            root = root->right;
        }
        else{
            root->left;
        }
    }
    return floor;
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

    int ans = floorBST(root , 20);
    cout<<"floor of the given x in this binary search tree is :"<<ans<<endl;
    return 0;
}
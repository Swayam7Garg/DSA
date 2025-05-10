#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(){
        val = 0;
        left = right = nullptr;
    }
    Node(int data){
        val = data;
        left = right = nullptr;
    }
    Node(int data , Node* left , Node* right){
        val = data;
        left = left;
        right = right;
    }
};
int Findmaxpath(Node * root , int &maxi){
    //base case
    if(root == NULL){
        return 0;
    }
    int leftpath = max(0 , Findmaxpath(root->left , maxi));
    int rightpath = max(0 , Findmaxpath(root->right , maxi));

    maxi = max(maxi , (leftpath + rightpath) + root->val);
    return max(leftpath , rightpath) + root->val;

}

int main(){
    int maxi = INT16_MIN;//it is the maximum path in a binary tree initially assigned to INT_MIN
    Node* root = new Node(8);
    root->left = new Node(18);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->right->left = new Node(7);
    root->right->left->left = new Node(8);
    int ans = Findmaxpath(root , maxi);
    cout<<"the maximum path in the given binary tree is : "<<ans;
    return 0;
}
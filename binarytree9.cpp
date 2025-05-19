//diameter of a binary tree
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
        left = right = nullptr;
    }
    Node(int val , Node* left , Node* right){
        data = val;
        left = left;
        right = right;
    }
};
class Solution {
    public:
        int diameterOfBinaryTree(Node* root) {
            int diameter = 0;
            height(root , diameter);
            return diameter;
        }
        int height(Node* node , int &diameter){
            if(node == NULL){
                return 0;
            }
            int lh = height(node->left , diameter);
            int rh = height(node -> right , diameter);
            diameter = max(diameter , lh + rh);// we simultaneously calculate the potential diameter (left height + right height) for each node.
            return 1 + max(lh , rh);
    
        }
    };

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->right->left = new Node(7);
    root->right->left->left = new Node(8);
      
    Solution s;
    int ans = s.diameterOfBinaryTree(root);
    cout<<"The diameter of the binary tree is : "<<ans;
    return 0;
}
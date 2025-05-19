//top view of a binary tree
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }
};
vector<int>top_view(Node * root){
    vector<int> ans;
    queue<pair<Node* , int>> q;
    map<int , int > mpp;

    if(root == NULL){
        return ans;
    }
    q.push({root , 0});

    while(!q.empty()){
        int size = q.size();
        auto it = q.front();
        q.pop();
        Node* node = it.first;
        int line= it.second;
        if(mpp.find(line) == mpp.end()) mpp[line] = node->data;

        if(node->left != NULL){
            q.push({node->left , line-1});
        }
        if(node -> right != NULL){
            q.push({node->right , line + 1});
        }
    }
    for(auto it : mpp){
        ans.push_back(it.second);
    }
    return ans;
}
int main(){
    Node* root = new Node(8);
    root->left = new Node(18);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->right->left = new Node(7);
    root->right->left->left = new Node(8);

    vector<int> topview = top_view(root);
    for(int i = 0 ; i < topview.size() ; i++){
        cout<<topview[i]<<" ";
    }

    return 0;
}
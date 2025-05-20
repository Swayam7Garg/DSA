#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

vector<int> bottomviewBT(Node* root){
    vector<int> ans;
    map<int , int > mp;
    queue<pair<Node* , int>> q;
    if(root == NULL){
        return ans;
    }
    q.push({root , 0});

    while(!q.empty()){
        auto p = q.front();
        q.pop();
        int line = p.second;
        Node* temp = p.first;

        mp[line] = (temp->data);
        if(temp->left != NULL){
            q.push({temp->left , line-1});
        }
        if(temp->right != NULL){
            q.push({temp->right , line+1});
        }
    }
    for(auto it : mp){
        ans.push_back(it.second);
    }
    return ans;
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

    vector<int> result = bottomviewBT(root);
    for(int i = 0 ; i < result.size() ; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
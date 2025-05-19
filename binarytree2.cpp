//level order traversal in a binary tree
#include<bits/stdc++.h>
using namespace std;

struct Treenode {
    int data;
    Treenode* left;
    Treenode* right;
    
    Treenode() {
        data = 0;
        left = right = nullptr;
    }
    Treenode(int val) {
        data = val; 
        left = right = nullptr;
    }
    Treenode(int val, Treenode* leftNode, Treenode* rightNode) {
        data = val; 
        left = leftNode; 
        right = rightNode; 
    }
};

vector<vector<int>> leveltraversal(Treenode* root) {
    vector<vector<int>> ans;
    if (root == nullptr) {
        return ans;
    }
    queue<Treenode*> q;
    q.push(root);
    while (!q.empty()) {
        vector<int> level;
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Treenode* node = q.front();
            q.pop();
            level.push_back(node->data);
            if (node->left != nullptr) { 
                q.push(node->left);
            }
            if (node->right != nullptr) {
                q.push(node->right);
            }
        }
        ans.push_back(level);
    }
    return ans;
}

int main() {
    Treenode* root = new Treenode(1);
    root->left = new Treenode(2);   
    root->right = new Treenode(3);
    root->left->left = new Treenode(4);
    root->left->right = new Treenode(5);
    root->right->left = new Treenode(6);
    root->right->right = new Treenode(7);

    vector<vector<int>> ans = leveltraversal(root);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }    

    return 0;
}
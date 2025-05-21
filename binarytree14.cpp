#include <bits/stdc++.h>
using namespace std;
// right side view of a binary tree
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution
{
    public: 
    vector<int> rightviewBT(Node *root)
    {
        int level;
        vector<int> res;

        func(root, 0, res);

        return res;
    }
    void func(Node *root, int level, vector<int> &res)
    {
        if (root == NULL)
        {
            return;
        }

        if (level == res.size())
        {
            res.push_back(root->data);
            func(root->right, level + 1, res);
            func(root->left, level + 1, res);
        }
    }
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    root->right->right->left = new Node(7);
    root->right->left = new Node(8);

    Solution obj;
    vector<int> ans = obj.rightviewBT(root);
    for(int i = 0 ;i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}
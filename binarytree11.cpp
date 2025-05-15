#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

vector<vector<int>> zigzagtravers(Node* root) {
    vector<vector<int>> result;
    if (root == nullptr) return result;

    queue<Node*> q;
    q.push(root);
    bool Lefttoright = true;

    while (!q.empty()) {
        int size = q.size();
        vector<int> row(size);

        for (int i = 0; i < size; ++i) {
            Node* node = q.front(); q.pop();
            int index = Lefttoright ? i : (size - 1 - i);
            row[index] = node->data;

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        Lefttoright = !Lefttoright;
        result.push_back(row);
    }

    return result;
}

int main() {
    Node* root = new Node(8);
    root->left = new Node(18);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->right->left = new Node(7);
    root->right->left->left = new Node(8);

    vector<vector<int>> traversal = zigzagtravers(root);

    // Print result
    for (const auto& level : traversal) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

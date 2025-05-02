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
        data =val;
        left = right = nullptr;
    }
    Node(int val , Node* left , Node* right)
    {
        data = val;
        left = left;
        right =right;
    }
};

vector<int> preordertraversal(Node* root){
    vector<int> preorder;
    stack<Node*> st;
    if(root == NULL){
        return preorder;
    }
    st.push(root);
    while (!st.empty())
    {
        root = st.top();
        st.pop();
        preorder.push_back(root->data);
        if(root->right != NULL){
            st.push(root->right);  
        }
        if(root->left != NULL){
            st.push(root->left);
        }
    }
    return preorder;
    
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);   
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> ans = preordertraversal(root);
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
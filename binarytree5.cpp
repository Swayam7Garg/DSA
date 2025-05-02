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

vector<int> postordertraversal(Node* root){
    vector<int> postorder;
    if(root == NULL){
        return postorder;
    }
    stack<Node*> st1 , st2;
    st1.push(root);
    while(!st1.empty())
    {
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root->left != NULL){
            st1.push(root->left);
        }
        if(root->right != NULL){
            st1.push(root->right);
        }

    }
    while(!st2.empty()){
        postorder.push_back(st2.top()->data);
        st2.pop();
    }
    return postorder;
}

int main(){
    //iterative postorder by 2 stacks
    Node* root = new Node(1);
    root->left = new Node(2);   
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> ans = postordertraversal(root);
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
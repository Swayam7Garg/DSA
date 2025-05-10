#include<bits/stdc++.h>
using namespace std;
//iterative postorder traversal using 1 stack
struct node{
    int data;
    node* left;
    node* right;

    node(){
        data = 0;
        left = right = nullptr;
    }

    node(int val){
        data = val;
        left = right = nullptr;
    }

    node(int val , node* left , node* right){
        data = val ;
        left = left;
        right = right;
    }
};

vector<int> iterativetraversal(node* root){
    vector<int> arr ;
    stack<int> st;
    
}
int main(){
    
    return 0;
}
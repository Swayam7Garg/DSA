// to reverse a LL iteratively
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val , Node* next1) : data(val) , next(next1) {}
    Node(int val) : data(val) , next(nullptr) {}
};
Node* convert2ll(vector<int> & arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}
Node* reverseLL(Node* head){
    Node* curr = head;
    Node* temp;
    Node* prev = NULL;
    if(head->next == NULL){
        return head;
    }
    while(curr != NULL){
        temp = curr->next;
        curr ->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    vector<int> v = {2,6,3,8};
    Node* head=  convert2ll(v);
    printLL(reverseLL(head));
    return 0;
}
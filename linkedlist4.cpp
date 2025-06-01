// to merge 2 sorted linked list 
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
void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* mergesortedLL(Node* l1 , Node * l2){
    if(l1 == NULL)return l1;
    if(l2 == NULL)return l2;

    Node* dummy = new Node(-101);
    Node* head = dummy;
    while(l1 != NULL && l2 != NULL){
        if(l1->data < l2 ->data){
            Node* newnode = new Node(l1->data);
            dummy->next = newnode;
            l1 = l1->next;
        }
        else{
            Node* newnode = new Node(l2->data);
            dummy->next = newnode;
            l2 = l2->next;
        }
        dummy = dummy->next;
    }
    return head->next;
}
int main(){
    vector<int> v1 = {2,6,8};
    vector<int> v2 = {1,5,6,9};
    Node* head=  convert2ll(v1);
    Node* head1 = convert2ll(v2);
    printLL(mergesortedLL(head , head1));
    return 0;
}
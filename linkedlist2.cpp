//to find the length of a linked list
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val , Node* next1) : data(val) , next(next1) {}
    Node(int val) : data(val) , next(nullptr) {}
};

int lengthofLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    Node* head = new Node(0);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);

    cout<<lengthofLL(head)<<endl;
    return 0;
}
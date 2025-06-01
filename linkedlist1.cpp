//converting array into a linked list
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
int main(){
    vector<int> v = {2,6,3,8};
    Node* ans=  convert2ll(v);
    while(ans){
        cout<<"["<<ans->data<<"]->";
        ans = ans->next;
    }
    cout<<"nullptr"<<endl;

    return 0;
}
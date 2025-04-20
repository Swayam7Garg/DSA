//implentation of a queue by a linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data ;
        Node* next ; 
    
        Node(int data){
            this->data = data ;
            next =NULL ;
        }

};
class Queue{
    public:
        Node* front;
        Node* rear ; 
    Queue(){
        front = rear = NULL ; 
    }
    void push(int x){
        //queue is empty
        Node* temp = new Node(x);
        if(rear == NULL){
            front =  rear = temp;
            return ;
        }
        //if queue is not empty and there are already elements in the linked list
        else{
            rear->next = temp;
            rear = temp;
        }
            
    }
    int pop(){
        //if the queue is empty
        if(front == NULL){
            cout << "Queue is empty!" << endl;
            return -1 ;
        }
        Node* temp = front;
        int d = temp->data;
        front = front->next;

        // if queue becomes null
        if(front == NULL){
            rear == NULL;
        }
        delete (temp);
        return  d;
    }
    void display(){
        Node* temp = front;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};


int main(){
    Queue q;
    q.push(4);
    q.push(34);
    q.push(45);
    q.display();
    q.pop();
    q.pop();
    q.push(12);
    q.display();

    return 0;
}
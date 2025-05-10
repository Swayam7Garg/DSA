#include<bits/stdc++.h>
using namespace std;

class kQueue {
    public:
        int n;
        int k;
        int *front;
        int *rear;
        int *arr;
        int freespot;
        int *next;

    public:
        kQueue(int n ,int k){
            this->n = k;
            this->k = k ;
            rear = new int[k];
            front = new int[k];
            for(int i = 0 ; i<k ; i++){
                front[i] = -1;
                rear[i] = -1;
            }
            next = new int[n];
            for(int i = 0 ; i<n ; i++){
                next[i] = i+1;
            }
            next[n-1] = -1 ; 
            arr = new int [n];
            freespot = 0;
        }
        void enequeue(int data , int qn){
            if(free == -1){
                cout<<"No empty space is present"<<endl;
                return ;
            }
            //find first free index
            int index  = freespot;

            //update frreespot
            freespot = next[index];

            //check whehter first element
            if(front[qn-1] == -1){
                front[qn-1] = index;
            }
            else{
                //link new element to the prev element
            }

            //update next
            next[index] = -1;

            //update rear
            rear[qn-1] = index;

            //push element
            arr[index] = data;
        }
}
int main(){
    
    return 0;
}
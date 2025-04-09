#include<bits/stdc++.h>
using namespace std;
class Mystack{
    public:
        int top ;
        int size;
        int * arr;

    //creating a constructor of this class
    Mystack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
            cout<<"pushed: "<<element<<endl;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    int pop(){
        if(top>=0){
            int popped = arr[top];
            top--;
            cout << "Popped: " << popped << endl;
            return popped;
        }
        else{
            cout<<"stack underflow";
            return -1;
        }
    }

    int peek(){
        
        if(top>=0)return arr[top];
        else return -1;
    }

    bool isempty(){
        if(top == -1){
            return true ;
        }
        else return false;
    }
};

int main(){
    Mystack st(5);
    st.push(1);
    st.push(1);
    st.push(5);
    st.push(8);
    st.push(2);
    st.pop();
    st.pop();
    cout << "Top element: " << st.peek() << endl;
    st.push(4);
    cout << "Is stack empty? " << (st.isempty() ? "Yes" : "No") << endl;
    return 0;
}
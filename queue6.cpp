// reversing a queue by a stack
#include<bits/stdc++.h>
using namespace std;

void reversal(queue<int> & q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){

        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(3);
    q.push(5);
    q.push(9);
    reversal(q);
    return 0;
}
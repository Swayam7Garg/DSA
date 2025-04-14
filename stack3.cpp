// to delete the middle element from a stack
#include<bits/stdc++.h>
using namespace std;
void solve(stack <int> & Mystack , int size ,int count){
    // making a base case
    if(count == size/2){
        Mystack.pop();
        return ;
    }

    int top = Mystack.top();
    Mystack.pop();

    //recursive call
    solve(Mystack , size ,count+1);

    Mystack.push(top);
}
void deletemiddleelemnt(stack <int> & Mystack , int size){
    int count  = 0;
    solve(Mystack , size ,count);
}
int main(){
    stack<int> st ;
    int n ;
    cout<<"enter the size of the stack :";
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        int element ;
        cout<<"enter the element to push in the stack :"<<endl;
        cin>>element;
        st.push(element);
    }
    cout<<"the top of the stack is : "<<st.top()<<endl;
    deletemiddleelemnt(st,n);
    cout<<"the stack is now : "<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
//insert element at the bottom of the stack
#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& st , int element){
    //base case
    if(st.empty()){
        st.push(element);
        return ;
    }

    int ans = st.top();
    st.pop();

    //recursive call
    solve(st , element);

    st.push(ans);

}
void insertatbottom(stack<int>& st , int element){
    solve(st , element);

}
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main(){
    stack <int> st;
    vector <int> v = {2,4,5,6,7,2,2,5,6,5,7,9,6};
    for(int i = 0 ; i<v.size() ; i++){
        st.push(v[i]);
    }
    int el;
    cout<<"enter the element to enter in the stack"<<endl;
    cin>>el;

    insertatbottom(st,el);
    cout << "Stack after inserting at bottom: ";
    printStack(st); // prints top to bottom
    return 0;
}
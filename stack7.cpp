//reverse stack using recursion
#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> & st){
    //base case
    if(st.empty()){
        return ;
    }

    int ans = st.top();
    st.pop();

    //recursive call
    solve(st);

    st.push(ans);
}
void reversestack(stack<int> & st){
    solve(st);
}

void printstack(stack<int> & st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    vector<int> v ;
    int n;
    cout<<"enter the number of elements to be inserted"<<endl;
    cin>>n;
    cout<<"enter the values to be inserted in the stack "<<endl;
    for(int i =0 ;i<n;i++ ){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i =0 ; i<v.size() ;i++){
        st.push(v[i]);
    }
    reversestack(st);
    cout<<"the reversed stack is "<<endl;
    printstack(st);
    return 0;
}
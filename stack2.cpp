#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"enter your string to reverse : ";
    cin>>str;
    stack<char> st;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        st.push(ch);
    }
    string ans = "";//making an empty string
    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout<<"reversed string is : "<<ans<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int nextsmallestelement(stack<int> & st , int n , vector<int> & v){
    for(int i = n-1 ; i>=0 ; i--){
        while(!st.empty() && v[st.top()]>=v[i]){
            st.pop();
        }
        if(!st.empty()){
             = -1;
        }
    }
}
int biggestrectangleinhistogram(vector<int> & arr){
    stack<int> st ; 
    int n = st.size();
    vector<int> left(n)  , right(n);
    nextsmallestelement(st ,n , arr , );
    prevsmallestelement(st ,n,arr , );
}
int main()
{
    vector<int> v = {3,5,6,6,2,1,9,5,3,8,1,4,10};
    biggestrectangleinhistogram(v);
    return 0;
}
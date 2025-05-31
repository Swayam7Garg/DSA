#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int> & arr , int num){
    int n = arr.size();
    for(int i = 0 ; i < n ;i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,22,0,64,7,57,3,68,6,3,43,23,4};
    int k ;
    cout<<"enter the number to search in the array"<<endl;
    cin>>k;
    int index = linear_search(arr , k);
    cout<<"the index of the given element in the array is "<<index<<endl;
    return 0;
}
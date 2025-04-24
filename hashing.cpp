#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;//no of elements in the array
    cin>>n;
    int arr[n];//declaring array
    for(int i = 0 ;i<n ; i++){
        cin>>arr[i];
    }
    //precompute
    int hash[13] = {0};
    for(int i = 0 ; i<n ; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cout<<"enter the element to check the count :"<<endl;
        cin>>number;
        cout<<"count of the given number is :"<<hash[number]<<endl;
    }
    return 0;
}
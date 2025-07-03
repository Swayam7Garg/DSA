//Maximum Points you can obtain from cards
#include<bits/stdc++.h>
using namespace std;

int maxpointscards(vector<int> & arr , int k){
    int lsum = 0 ;
    int rsum = 0 ;
    int maxsum = 0; 
    int n = arr.size();
    for(int i = 0 ; i < k ; i++){
        lsum += arr[i];//to calculate lsum 
    }
    maxsum = lsum;//making maxsum equal to lsum
    int rindex = n -1;
    for(int i = k -1 ; i >= 0 ; i--){
        lsum -= arr[i];
        rsum += arr[rindex];
        rindex--;
        maxsum = max(lsum + rsum , maxsum);
    }
    return maxsum;
}

int main(){
    vector<int> v;
    int n;
    cout<<"Enter the number of cards to enter in the array"<<endl;
    cin>>n;
    cout<<"Enter the cards value to store in the array "<<endl;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k; //size of window to calculate maximum points
    cout<<"enter the window size"<<endl;
    cin>>k;
    cout<<"cards given";
    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"The maximum points from the given cards in a given window is "<<maxpointscards(v , k)<<endl;
    return 0;
}
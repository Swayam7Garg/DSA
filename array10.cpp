#include<bits/stdc++.h>
using namespace std;

//KADANE'S ALGORITHM
int maximumsum(vector<int> & arr){
    int currsum = arr[0]; //initializing a Current subarray sum
    int maxsum = arr[0]; //maximum sum initially first element

    for(int i = 1 ; i <arr.size() ; i++){
        //loop from the second element
        currsum  = max(currsum + arr[i], arr[i]);//most important step either to start a new array or to extend the current one

        maxsum = max(maxsum ,currsum);//storing the maximum value
    }
    return maxsum;
}

int main(){
    int n ;
    cout<<"enter the number of element"<<endl;
    cin>>n;
    cout<<"Enter the elements to enter in the array to get the subarray with the largest sum"<<endl;
    vector<int> arr;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"the maximum sum is "<<maximumsum(arr)<<endl;
    return 0;
}
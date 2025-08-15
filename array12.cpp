//next permutation
#include<bits/stdc++.h>
using namespace std;

void Nextpermutation(vector<int>& arr){
    int index = -1; //initially marked  -1 
    int n = arr.size();

    for(int i = n - 2 ; i >= 0 ; i--){
        if(arr[i] < arr[i + 1]){//condition to find the index which is the break point 
            index = i;
            break;
        }
    }

    //if there exist an array which doesn't have any break point i > i + 1 always then  
    if(index == -1){
        reverse(arr.begin() , arr.end());
        return;
    }

    //now swapping the index with a greater element but smallest among all the greater elemetents
    for(int i = n -1 ; i > index ; i--){
        if(arr[i] > arr[index]){
            swap(arr[index] , arr[i]);
            break;
        }
    }

    //reversing the rest array so that it becomes least as possible and it will the next permutation of the given array
    reverse(arr.begin() + index + 1 , arr.end());

    for (int x : arr) cout << x << " ";
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of elements to enter: "<<endl;
    cin>>n;
    vector<int> arr;
    for(int i = 0 ; i < n ; i++){
        int x;
        cout<<"Enter the element";
        cin>>x;
        arr.push_back(x);
    }

    Nextpermutation(arr);
}
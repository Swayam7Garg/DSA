#include<bits/stdc++.h>
using namespace std;

int Secondlargestelement(int arr[] , int n ){
    int large = INT_MIN;
    int second_large = INT_MIN;
    for(int i = 0 ; i< n ;i++){
        if(arr[i] > large){
            second_large = large;
            large = arr[i];
        }
        if(arr[i] < large && arr[i] > second_large){
            second_large = arr[i];
        }
    }
    return second_large;
}
int main(){
    int arr[] = {2,3,7,5,3,0,8,54,14,32,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sl = Secondlargestelement(arr , n);
    cout<<"Second largest element in the array is : "<<sl<<endl;
    return 0;
}
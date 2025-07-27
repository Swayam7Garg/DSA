#include<bits/stdc++.h>
using namespace std;

//to print all the subsequence by recursion
void printF(int ind , vector<int> & ds , int arr[] , int n){
    if(ind == n){//base case if index becomes greater than the number of elements in the array
        for(int it : ds){
            cout<<it<<" ";//printing the subsequence
        }
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);//taking the value of the index in the data structure
    printF(ind + 1 , ds , arr , n);//calling function to perform recursion until base case is reached 

    ds.pop_back();//not taking the value of the index in the data structure
    printF(ind + 1 , ds , arr,n);//recursion 
}
int main(){
    int arr[] = {1,2,3};
    vector<int> ds;//data structure for storing the subsequence to display
    int n = 3;

    printF(0,ds,arr,n);
    return 0;
}
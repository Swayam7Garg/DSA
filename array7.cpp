//remove element in an array
#include<bits/stdc++.h>
using namespace std;

vector<int>rearrangearray(vector<int> &nums , int val){
    int count = 0 ;
    int n = nums.size();
    for(int i = 0 ; i<n ; i++){
        if(nums[i] != val){
            nums[count] = nums[i];
            count++;
        }
    }
    cout<<"the number of elements not equal to val"<<count<<endl;
    return nums;
}
int main(){
    int n;
    vector<int> nums;
    cout<<"enter the number of element to insert in the array"<<endl;
    cin>>n;
    cout<<"enter the elements to be inserted"<<endl;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"enter the value to arrange or delete in the array"<<endl;
    int k ;
    cin>>k;

    vector<int> ans = rearrangearray(nums , k);
    for(int i =0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
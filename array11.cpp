#include<bits/stdc++.h>
using namespace std;
//Brute force approach for No. of subarray in an array with sum k 
int subarraySum(vector<int>& nums, int k){
    int n = nums.size();
    int count = 0;
    for(int i = 0 ; i < n; i++){
        int sum = 0;
        for(int j = i ; j < n ; j++){
            sum += nums[j];
            if(sum == k){
                count++;
            }

        }
    }
    return count;
}

int main(){
    vector<int> nums= {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    cout<<"Brute force approach for No. of subarray in an array with sum k :"<<subarraySum(nums , k);
    return 0;
}
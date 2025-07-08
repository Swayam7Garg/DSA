#include<bits/stdc++.h>
using namespace std;
//No. of subarray in an array with sum k with Prefix Sum approach

int subarraySum(vector<int> & nums , int k){
    map <int , int > mp; // map for storing prefix sum and count
    int count = 0;
    int prefixsum = 0;
    int n = nums.size();
    //Storing 0 count in the map initally for edge cases 
    mp[0] = 1;
    
    for(int i = 0 ; i < n ; i++){
        prefixsum += nums[i];//for the ith element making the sum of all previous elements

        if(mp.find(prefixsum - k) != mp.end()){//finding the prefix -k  value in the map 
            count += mp[prefixsum - k];//incrementing number of subarray with k sum according to the number of prefixsum - k occured in the
        }
        mp[prefixsum]++;//adding prefix sum and its occurence into the map 
    }
    return count;
}
int main(){
    vector<int> nums= {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    cout<<"No. of subarray in an array with sum k :"<<subarraySum(nums , k);
    return 0;
}
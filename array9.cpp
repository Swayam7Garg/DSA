#include<bits/stdc++.h>
using namespace std;

vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    int cnt1 = 0;
    int cnt2 = 0;
    vector<int> ans;
    for(int i = 0 ; i < n ;i++){
        for(int j =0 ; j < m ; j++){
            if(nums1[i] == nums2[j]){
                cnt1++;
                break;
            }
        }
    } 
    for(int i = 0 ; i < m ;i++){
        for(int j =0 ; j < n ; j++){
            if(nums2[i] == nums1[j]){
                cnt2++;
                break;
            }
        }
    }   
    ans = {cnt1 , cnt2};
    return ans;
}

int main(){
    vector<int> nums1 = {4,3,2,3,1};
    vector<int> nums2 = {2,2,5,2,3,6};
    vector<int> ans = findIntersectionValues(nums1 , nums2);
    for(int i = 0 ; i < 2 ; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
//arrage array by even and odd
#include<bits/stdc++.h>
using namespace std;

vector<int> oddneve(vector<int> &nums){
    int n = nums.size();
    int j= 0;
    int k = n-1;
    vector<int> ans(n);
    for(int i = 0 ; i< n ;i++){
        if(nums[i] %2  == 0){
            ans[j++] = nums[i];
        }
        else if (nums[i] % 2 != 0){
            ans[k--] = nums[i];
        }

    }
    cout<<"hi"<<endl;
    return ans;
}
int main(){
    vector<int> nums = {2,1,6,4,5,1,2,9,8,6};
    cout<<"hell"<<endl;
    vector<int> ans1 = oddneve(nums);
    cout<<"hello";
    for(int i = 0 ; i<ans1.size() ; i++){
        cout<<ans1[i]<<" ";
    }
    return 0;
}
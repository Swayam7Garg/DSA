//2 sum problem
#include<bits/stdc++.h>
using namespace std;

vector<int> sum(vector<int> & arr , int target){
    int n = arr.size();
    /*vector<int> ans;
    for(int i =0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            int sum = arr[i] + arr[j];
            if(sum == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    
    }
    return {-1,-1}   ; */
    map<int , int> mpp;
    for(int i = 0 ; i < n ; i++){
        int num = arr[i];
        int moreneeded = target - num;
        if(mpp.find(moreneeded) != mpp.end()){
            return {mpp[moreneeded] , i};
        }
        mpp[num] =i;
    }
    return {-1 ,-1};
}
int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    vector<int> ans = sum(a , 11);
    cout << "This is the answer for 2 sum problem: [" << ans[0] << ", "<< ans[1] << "]" << endl;
    return 0;
}
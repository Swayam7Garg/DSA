//length of longest subarray with sum k
#include<bits/stdc++.h>
using namespace std;

// int bruteforce(vector<int> & v ,int k){
//     //in this approach i will be checking every subarray present in the array v
//     int len = 0;
//     int n = v.size();
//     for(int i = 0 ; i< n ; i++){
//         int sum = 0;
//         for(int j = i ; j<n ; j++){
//             sum += v[j];
//             if (sum == k){
//                 len = max(len , j - i + 1);
//             }
//         }
//     }
//     return len;
// }
int optimal(vector<int> &v , int k){
    int n = v.size();
    int maxlen = 0 ;
    int sum = v[0];
    int left = 0 , right = 0;
    while(right < n){

        while(left <= right && sum > k){
            sum -= v[left]; 
            left++;
        }

        if(sum == k){
            maxlen = max(maxlen , right - left + 1);
        }

        
        right++;
        if(right < n){
            sum += v[right];
        }

    }
    return maxlen;
}
int main(){
    
    vector<int> v = {2, 3, 5, 1, 9};
    int n ;
    cout<<"enter the sum to find the length :"<<endl;
    cin>>n;
    // cout<<"the length of the longest subarray is "<<bruteforce(v ,n)<<endl;
    cout<<"the length of the longest subarray is "<<optimal(v ,n)<<endl;

    return 0;
}
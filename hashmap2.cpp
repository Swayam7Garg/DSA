#include<bits/stdc++.h>
using namespace std;
int sumofuniquenum(vector<int> & arr){
    int  n = arr.size();
    unordered_map<int , int> mp;//declaring unordered map to access the elements faster and ordered map is not necessarily required in this problem
    for(int i =0 ; i<n ; i++){
        mp[arr[i]]++;//storing key (element) and values(frequency) of the given array into the map
    }

    int sum = 0 ; // sum of the elements which are unique 

    for(auto const & it : mp){
        if(it.second == 1){
            sum += it.first;
        }
    }
    return sum;
}

int main(){
    vector<int> arr = {2,3,4,5,6,2,5,4,7};
    int ans = sumofuniquenum(arr);
    cout<<"sum of the unique elements present in the given array is : "<<ans<<endl;
    return 0;
}
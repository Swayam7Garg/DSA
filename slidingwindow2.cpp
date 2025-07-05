#include<bits/stdc++.h>
using namespace std;
//Longest substring without repeating characters 

int longestsubstr(string s){
    int left = 0 , right = 0;
    int len = 0 ;
    vector<int> mpp(256 , -1);
    int n = s.length();

    while(right < n){
        if(mpp[s[right]] != -1){
            left = max(left , mpp[s[right]] + 1);
        }
        mpp[s[right]] = right;

        len = max(len , right - left + 1);
        right++;
    }
    return len;
}
int main(){
    string s = "";
    cout<<"Enter the string :";
    cin>>s;
    cout<<"The longest substring for the given string without repeating characters is : "<<longestsubstr(s)<<endl;

    return 0;
}
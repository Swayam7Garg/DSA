#include<bits/stdc++.h>
using namespace std;
//longest substring without repeating characters

int longestsubstr(string s){
    if(s.length() == 0){//if length of the string  = 0 then return 0
        return 0;
    }
    int maxans = 0;//initializing max length
   
    for(int i = 0 ; i <s.length() ; i++){
        unordered_set<char> set;//initalizing a unorderd set to store the elements 
        for(int j = i ; j <s.length() ;j++){
            if(set.find(s[j]) != set.end()){//if j is already present in the set 
                break;
            }
            set.insert(s[j]);//insert element from the string not present in the set
            maxans = max(maxans , j-i +1);//changing maxlength if j - i is greater than the older maxans
        }
    }
    return maxans;
}
int main(){
    string s ="";
    cout<<"Enter the string :";
    cin>>s;

    cout<<"The longest substring which has non repeating characters :"<<longestsubstr(s);
    
    
    return 0;
}
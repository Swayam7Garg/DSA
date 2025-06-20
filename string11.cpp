//valid anagram 
#include<bits/stdc++.h>
using namespace std;

bool validanagram(string s , string t){
    // Anagram - a word, phrase, or name formed by rearranging the letters of another word
    if(s.length() != t.length()){
        return false;
    }
    unordered_map<char , int> mp;//creating a unordered map to store the frequency of each character present in the string s
    int len = s.length();
    for(int i = 0 ; i < len ; i++){
        mp[s[i]]++;
    }
    for(int i = 0 ; i < len ; i++){
        if(mp.find(t[i]) == mp.end()){//checking if t[i] means the character in the string t is in the map or not
            return false;
        }
        
    }
    return true;
}
int main(){
    string s = "google";
    string t = "logoge";
    if(validanagram(s,t)){
        cout<<"The given 2 strings are anagram of each other"<<endl;
    }
    else{
        cout<<"The given 2 strings are not anagram of each other"<<endl;
    }
    return 0;
}
//check if the string is palindrome or not
#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s){
    int st = 0;
    int end = s.length() - 1;
    while(st < end){
        if(s[st] != s[end]){
            return false;
        }
        st++;
        end--;

    }
}
int main(){
    string s1 = "hwllo";
    string s2 = "omomo";
    if(palindrome(s1)){
        cout<<s1<<" is a palindrome"<<endl;
    } else {
        cout<<s1<<" is not a palindrome"<<endl;
    }
    if(palindrome(s2)){
        cout<<s2<<" is a palindrome"<<endl;
    } else {
        cout<<s2<<" is not a palindrome"<<endl;
    }
    return 0;
}
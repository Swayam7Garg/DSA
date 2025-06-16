//Valid Palindrome
#include<bits/stdc++.h>
using namespace std;

bool alphanumeric(char ch){//to make it only alphanumeric
    if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    else return 0;
    
}
char tolower(char ch){
    //to convert the character into lower case
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    if(ch >= 'A' && ch <= 'Z'){
        ch = ch - 'A' + 'a';
    }
    return ch;
}

bool validpalindrome(string s){
    string temp ="";
    for(int i = 0; i< s.length() ; i++){
        char ch = s[i];
        if(alphanumeric(ch)){
            temp.push_back(tolower(ch));
        }
    }
    //to check if palindrome or not
    int st = 0;
    int end =temp.size() -1 ;
    while(st <= end){
        if(temp[st] != temp[end]){
            return false;
        }
        st++;
        end--;

    }
    return true;
}
int main() {
    string s = "abc%^$1221&*c&bagit";
    if (validpalindrome(s)) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is not a palindrome" << endl;
    }
    return 0;
}

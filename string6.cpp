#include<bits/stdc++.h>
using namespace std;

string reversewords(string s){
    //initializing left and right pointers 
    int left = 0 ; 
    int right = s.length() - 1;

    string temp = ""; //word
    string ans = ""; //answer

    while(left <= right){
        char ch = s[left]; //making ch 
        if(ch != ' '){
            temp = temp + ch;//making a word by adding letters (ch) in it
        }
        else if(ch == ' '){
            if(ans!=""){
                ans = temp + " " + ans;
            }
            else{
                ans = temp;
            }
            temp = "";
        }
        left++;
    }

    //to add the last word
    if(temp != ""){
        if(ans!="")ans=temp + " " + ans;
        else ans = temp;
    }
    return ans;
}
int main(){
    string st="Hello my Name is Cristiano Ronaldo ";
    cout<<"Before reversing words: "<<endl;
    cout<<st<<endl;
    cout<<"After reversing words: "<<endl;
    cout<<reversewords(st);
    return 0;
}
//length of last word
#include<bits/stdc++.h>
using namespace std;
int lengthoflastword(string s){
    int end = s.length() - 1; //pointer at the end of the string
    while(end >= 0 && s[end] ==' '){
        end--;//decrementing end if in the end there is ' ' and not a word
    }

    int start = end; // start pointer which will initially point at end position
    while(start >= 0 && s[start] != ' '){
        start--; //decrementing uptill start is not equal to ' ' 
    }
    return end - start; //start will be at the starting of the last word and end will be at the ending of that word
}
int main(){
    string s = "hello my name is Swayam  ";
    cout<<"Length of the last word in this string is : "<<lengthoflastword(s)<<endl;
    return 0;
}
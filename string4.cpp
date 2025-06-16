//remove all the occurence of a part in a string 
#include<bits/stdc++.h>
using namespace std;

string removeoccurence(string s , string part){
    while(s.length()!= 0 && s.find(part) < s.length()){//condition says length of s should not be equal to 0 and part string should be always less s length
        s.erase(s.find(part) , s.length());
    }
    return s;
}
int main(){
    string s1 = "absfjabcbasbcabacbacba";
    string s2 = "abc";
    cout<<removeoccurence(s1 , s2);
    return 0;
}
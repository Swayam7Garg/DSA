//longest common prefix 
#include<bits/stdc++.h>
using namespace std;
string longestcommonprefix(vector<string> & sarr){
    string prfx = sarr[0]; //taking first string to compare with other string 
    int prfxlen = prfx.length() ; //length of string prfx 

    if(sarr.empty()){
        return "";
    }
    for(int i = 0 ; i < sarr.size() ; i++){
        string s = sarr[i] ;// every string in the array will be iterated and compared

        while (prfxlen > s.length() || prfx != s.substr(0 , prfxlen))
        {
            prfxlen--;//decrementing prefix length 
            if(prfxlen == 0){
                return "";
            }
            prfx = prfx.substr(0,prfxlen);//if prefix is not same then reducing it
        }
        return prfx;
        
    }
}
int main(){
    vector<string> arr = {"hello" , "hell" , "helowene" , "helina" , "hellore"};
    string s = longestcommonprefix(arr);
    cout<<"the longest common prefix in the given string is :"<<s<<endl;
    return 0;
}
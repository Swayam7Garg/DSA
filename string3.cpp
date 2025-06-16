// given a string 'STR' of words. You need to replace all the spaces between words with “@40”.
#include<bits/stdc++.h>
using namespace std;

string repalcespaces(string str){
    string temp = "";
    
    for(int i = 0; i <str.length() ;i++){
        if(str[i] == ' ')//if a space is present then replace it with @40
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            //if str[i] != ' ' then push str[i] into temp
            temp.push_back(str[i]);
        }
    }
    return temp;
}
int main(){
    string str = "hello my name is cristiano ronaldo";
    cout<<repalcespaces(str)<<endl;
    return 0;
}
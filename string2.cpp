// get maximum occured character in a string according to the order
#include<bits/stdc++.h>
using namespace std;

char getmaxoccurcharacter(string s){
    int arr[26] = {0};//creating an array with 0 to store all the letters 

    //inserting the counts of the letter in the given string 
    for(int i = 0 ; i < s.length() ; i++){
        char ch = s[i];
        int number = ch - 'a'; //finding the character 
        arr[number]++;//incrementing its value in the array
    }

    //now finding the index with maximum value
    int maxi = INT_MIN;
    int ans = 0;
    for(int i = 0 ; i < 26 ; i++){
        if(arr[i] > maxi){
            ans =i ;
            maxi = arr[i];
        }
    }

    return 'a' + ans;


}   

int main(){
    string s = "swayamgrgg";
    cout<<"The letter occuring the most in this string is : "<<getmaxoccurcharacter(s);
}
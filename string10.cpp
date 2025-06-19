//FizzBuzz -> if 
#include<bits/stdc++.h>
using namespace std;

vector<string> FizzBuzz(int n){
    vector<string> answer;

    for(int i = 1 ; i <= n ; ++i){
        if(i % 3 == 0 && i % 5 == 0){
            answer.push_back("FizzBuzz");
        }
        else if (i % 3==0){
            answer.push_back("Fizz");
        }
        else if(i % 5 == 0){
            answer.push_back("Buzz");
        }
        else{
            answer.push_back(to_string(i));
        }
    }
    return answer;
}
int main(){
    int n;
    cout<<"Enter the number to find the FizzBuzz array"<<endl;
    cin>>n;
    vector<string> fizzbuzz = FizzBuzz(n);
    for(int i = 0 ; i < n ; i++){
        cout<<fizzbuzz[i]<<" ";
    }
    cout<<endl;
    return 0;
}
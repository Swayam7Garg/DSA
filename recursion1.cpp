#include<bits/stdc++.h>
using namespace std;

void recursion(int i , int n){
    if(i > n){
        return ;
    }
    cout<<i<<endl;
    i++;
    recursion(i,n);
}

void backtrack(int i , int n){
    if(i > n){
        return ;
    }
    
    backtrack(i+1,n);
    cout<<i<<endl;
}

int sumoffirstn(int i ,int sum ,int n){
    if (i > n){
        return sum; 
    }
    sum = sum + i;
    i++;
    sumoffirstn(i , sum , n);
}

int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

vector<int> reversearray(vector<int> & arr,int i){
    int n = arr.size();
    if(i >= n/2){
        return arr;
    }
    swap(arr[i] , arr[n - 1 -i]);
    return reversearray(arr , i+1);
}

bool checkpalindrome(string s , int i){
    int n = s.length();
    if(i >= n/2){
        return true;
    }

    if(s[i] != s[n -1 -i]){
        return false;
    }
    return checkpalindrome(s , i+1);
}
//fibonnacci value of a index
int fibonnacci(int n){
    if(n <= 1){
        return n;
    }
    return (fibonnacci(n-1) + fibonnacci(n-2));
}
int main(){
    int n ;
    cout<<"enter n:";
    cin>>n;
    // int i = 1;
    // int sum = 0;
    // recursion(i,n);
    // backtrack(i,n);
    // cout<<sumoffirstn(i , sum , n);
    // cout<<factorial(n);
    // vector<int> arr = {1,2,4,5,5,6,7,8};
    // vector<int> reversedarray = reversearray(arr , 0);

    // for(int i = 0 ; i < arr.size() ; i++){
    //     cout<<reversedarray[i]<<" ";
    // }
    // string s = "sMADAM";
    // cout<<checkpalindrome(s , 0);
    cout<<"The value of the nth index in the fibonnacci series is :"<<fibonnacci(n)<<endl;
    return 0;
}
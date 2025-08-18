//Rotate Matrix of n x n by 90 degrees
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>Rotate_Matrix(vector<vector<int>> matrix){
    int n = matrix.size();

    //transposing the matrix
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }

    //Reversing the rows 
    for(int i = 0 ; i < n ; i++){
        reverse(matrix[i].begin() , matrix[i].end());
    }

    return matrix;
}

int main(){
    int n;
    cout<<"Enter the size of the matrix: ";
    cin>>n;
    cout<<endl;
    vector<vector<int>>matrix(n , vector<int>(n));
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n ;j++){
            int x;
            cout<<"Enter the element "<<i<<" x "<<j<<":";
            cin>>x;
            matrix[i][j] = x;
            cout<<endl;
        }
    }
    vector<vector<int>>ANS = Rotate_Matrix(matrix);
    cout<<"Rotated matrix is:\n";
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n ;j++){
            cout<<ANS[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
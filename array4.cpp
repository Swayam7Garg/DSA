// Program to rotate the array
#include <bits/stdc++.h>
using namespace std;
void rotatematrix(vector<vector<int>> & matrix){
    int n = matrix.size();
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j<n ; j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        reverse(matrix[i].begin() , matrix[i].end());
    }
}

int main()
{
    int n;
    cout << "enter the N in the N x N matrix :";
    cin >> n;
    vector<vector<int>> matrix(n , vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "insert ["<< i << "][" << j<<"] :";
            cin >> matrix[i][j];
        }
    }
    rotatematrix(matrix);
    cout<<"rotated matrix :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}
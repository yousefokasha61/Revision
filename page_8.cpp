#include<bits/stdc++.h>
using namespace std;

// Write a C++ function to transpose a matrix. Your function should accept two 2D arrays as parameters, 
// one for the input and one for the output, verifies that the output array dimensions match the expected ones 
// for transposing the input array and populate i t with the matrix transpose by converting each row in the 
// input matrix to a column in the output matrix. The function should return either true or false based on 
// whether the transposition is possible for the passed input and output arrays or not. 
// 2 7 9 5 4 3 2 9 4 7 Input Matrix 5 Output Matrix 3

int main(){
    // Defining dimensions of the original matrix.
    int N=4, M=3;

    // Declaring it & Initializing values. 
    int mat[N][M]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    

    // Printing the original Matrix.
    cout<<"Original Matrix is -\n";
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }


    // Declaring transpose matrix with inverted 
    // dimensions i.e. M * N
    int T_mat[M][N];

    // Assigning values accordingly. 
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            T_mat[j][i] = mat[i][j];
        }
    }

    // Printing the transposed Matrix.
    cout<<"\nTransposed Matrix is -\n";
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cout<<T_mat[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}


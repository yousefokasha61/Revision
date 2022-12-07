#include<bits/stdc++.h>
using namespace std;

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


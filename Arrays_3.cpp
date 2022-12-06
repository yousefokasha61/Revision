#include <climits>
#include <iostream>

using namespace std;


bool isMagicSquare(int mat[][3], int n) {
  // (page 8) Write a C++ program to check if a given 3x3 matrix comprises a magic square or not. A magic square is a square where the sum of all the elements in each row, column and diagonal is the same.
  
    // calculate the sum of
    // the prime diagonal
    int i=0,j=0;
    // sumd1 and sumd2 are the sum of the two diagonals
    int sumd1 = 0, sumd2=0;
    for (i = 0; i < n; i++)
    {
        // (i, i) is the diagonal from top-left -> bottom-right
        // (i, n - i - 1) is the diagonal from top-right -> bottom-left
        sumd1 += mat[i][i];
        sumd2 += mat[i][n-1-i];
    }
    // if the two diagonal sums are unequal then it is not a magic square
    if(sumd1!=sumd2)
        return false;
 
    // For sums of Rows
    for (i = 0; i < n; i++) {
         
        int rowSum = 0, colSum = 0;   
        for (j = 0; j < n; j++)
        {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        if (rowSum != colSum || colSum != sumd1)
            return false;
    }
   return true;
}



int main() {

  
}

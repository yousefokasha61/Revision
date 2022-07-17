/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int arraySum(int arr[], int size, int &sum, int index){
    if(index == size - 1){
        return arr[index];
        
    }
    return arr[index] + arraySum(arr, size, sum, index+1);
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int sum = 0;
    cout << arraySum(arr, 8, sum, 0) << endl;
    
    

    return 0;
}

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

void exists(int bigNumber, int digit){
    if(bigNumber == 0){
        return;
    }
    int last_digit = bigNumber % 10;
    if(last_digit == digit){
        cout << "exists" << endl;
        return;
    }
    exists(bigNumber/10, digit);
}

int main()
{
    exists(1234123,5);
    
    return 0;
}

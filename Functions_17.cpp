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

double power(int base, int exponent){
    if(exponent == 0){
        return 1;
    }
    else if(exponent < 0){
        return power(base, exponent+1) / double(base);
    }
    return base * power(base, exponent - 1);
}

int main()
{
    cout << power(5,-3) << endl;
    
    return 0;
}

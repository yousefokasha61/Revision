/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int power = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << pow(2,power++) << " ";
        }
        cout << endl;
    }

    return 0;
}

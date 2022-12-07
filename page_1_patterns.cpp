/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // 1  2  3  4
    // 5  6  7  8
    // 9  10 11 12
    // 13 14 15 16
    int counter = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << counter++ << " ";
        }
        cout << endl;
    }

    // 0 1 2 3 4 
    // 5 6 7 8 9 
    // 9 8 7 6 5 
    // 4 3 2 1 0 

    counter = 0;
    for (int i = 0; i < 4; i++) {
        if(i == 2){
            counter--;
        }
        for (int j = 0; j < 5; j++) {
            if(i < 2){
                cout << counter++;
            }
            else {
                cout << counter--;
            }
        }
        cout << endl;
    }


    // 1
    // $$
    // 123
    // $$$$
    // 12345
    for(int i=1;i<=8;++i){
    for(int j = 1; j<=i;++j){
      if(i % 2 == 0){
        cout << "#";
      }
      else{
        cout << j;
      }
    }
    cout << endl;

  // 1 2 4 8
  // 16 32 64 128
  for(int i=1;i<=8;++i){
    for(int j = 1; j<=i;++j){
      if(i % 2 == 0){
        cout << "#";
      }
      else{
        cout << j;
      }
    }
    cout << endl;
  }

    return 0;
}

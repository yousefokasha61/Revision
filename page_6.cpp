#include <climits>
#include <iostream>

using namespace std;


int main() {
   //(page 7) Write a C++ program that finds the common elements between two arrays of
   //variable sizes. Your program should ask the user to input the sizes of the
   //two arrays and the elements in each of them. The program then should
   //display the common elements that appear in both arrays.
   int size_1;
   int size_2;
   cin >> size_1;
   cin >> size_2;
   int *arr_1 = new int[size_1];
   int *arr_2 = new int[size_2];
   for (int i = 0; i < size_1; ++i) {
     cin >> arr_1[i];
   }
   for (int i = 0; i < size_2; ++i) {
     cin >> arr_2[i];
   }
   int loop_size_1 = min(size_1, size_2);
   int loop_size_2 = max(size_1, size_2);
  
   for (int i = 0; i < loop_size_1; ++i) {
     for (int j = 0; j < loop_size_2; ++j) {
       if (arr_1[i] == arr_2[j]) {
         cout << arr_1[i] << endl;
       }
     }
   }
//   ==============================================
  
}

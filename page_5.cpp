#include <climits>
#include <iostream>

using namespace std;
// Write a C++ function that takes a single dimensional array and finds the second largest element in the array.

int secondMaximum(int arr[], int size) {
  int max = INT_MIN;
  int second_max = INT_MIN;
  for (int i = 0; i < size; ++i) {
    if (arr[i] > max) {
      second_max = max;
      max = arr[i];
    } else if (arr[i] > second_max) {
      second_max = arr[i];
    }
  }
  return second_max;
}

int main() {

}

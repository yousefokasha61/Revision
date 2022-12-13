#include <iostream>

using namespace std;

int sumArray(int arr[], int size, int index){
  if(index == size - 1){
    // cout << arr[index] << " ";
    return arr[index];;
  }
  // cout << arr[index] << " ";
  return arr[index] + sumArray(arr, size, index + 1);
}

int main() {
  int arr[] = {1,2,3,4,5,6,7,8};
  cout << sumArray(arr,8,0) << endl;
}

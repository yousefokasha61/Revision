#include <iostream>

using namespace std;

void print(int arr[], int size, int index, int &sum){
  if(index == size - 1){
    // cout << arr[index] << " ";
    sum += arr[index];
    return;
  }
  // cout << arr[index] << " ";
  sum += arr[index];
  print(arr, size, index+1, sum);
}

int main() {
  int arr[] = {1,2,3,4,5,6,7,8};
  int sum = 0;
  print(arr,8,0, sum);
  cout << sum << endl;
}
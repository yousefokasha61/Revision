#include <iostream>

using namespace std;

void print(int arr[], int size, int index, int &counter){
  if(index == size - 1){
    // cout << arr[index] << " ";
    if(arr[index] != 0){
      counter++;
    }
    return;
  }
  // cout << arr[index] << " ";
  if(arr[index] != 0){
    counter++;
  }
  print(arr, size, index+1, counter);
}

int main() {
  int arr[] = {1,0,3,0,5,0,7,8};
  int sum = 0;
  print(arr,8,0, sum);
  cout << sum << endl;
}
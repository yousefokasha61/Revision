#include <iostream>

using namespace std;



void print(int arr[], int size, int index){
  if(index == size - 1){
    cout << arr[index] << " ";
    return;
  }
  cout << arr[index] << " ";
  print(arr, size, index+1);
}

int main() {
  int arr[] = {1,2,3,4,5,6,7,8};
  print(arr,8,0);
}
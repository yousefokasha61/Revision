#include <iostream>

using namespace std;

void print(int arr[], int size, int i, int &index, int number_to_find){
  if(i == size - 1){
    if(arr[i] == number_to_find){
      index = i;
    }
    return;
  }
  if(arr[i] == number_to_find){
    index = i;
  }
  print(arr, size, i+1, index, number_to_find);
}

int main() {
  int arr[] = {1,0,3,0,5,0,7,8};
  int index = -1;
  int number_to_find = 7;
  print(arr,8,0, index, number_to_find);
  cout << index << endl;
}

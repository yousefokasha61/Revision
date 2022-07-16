#include <iostream>

using namespace std;

int main() {
  int size_1;
  int size_2;
  cin >> size_1;
  cin >> size_2;
  int *arr_1 = new int[size_1];
  int *arr_2 = new int[size_2];
  for(int i = 0;i<size_1;++i){
    cin >> arr_1[i];
  }
  for(int i = 0;i<size_2;++i){
    cin >> arr_2[i];
  }

  for(int i = 0;i<size_1;++i){
    for(int j = 0;j<size_2;++j){
      if(arr_1[i] == arr_2[j]){
        cout << arr_1[i] << endl;
      }
    }
  }
}
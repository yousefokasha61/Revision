#include <iostream>

using namespace std;

int findSum(int n){
  if( n==1){
    return 1;
  }
  return n + findSum(n - 1);
}

int main() {
  cout << findSum(8) << endl;
}
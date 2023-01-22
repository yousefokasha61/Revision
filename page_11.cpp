#include <climits>
#include <iostream>

using namespace std;

// Write 2 versions (recursive and nonrecursive) of the function int sumDigits(int   n) that n=134, 
// calculates the sum of the digits of the input parameter n. 
// For example, if the input the function should return 8 (1+3+4).

int sumDigits(int n){
  if(n < 9){
    return n;
  }
  int sum = 0;
  while(n > 0){
    int last = n % 10;
    sum += last;
    n /= 10;
  }
  return sum;
}

int sumDigitsRecursive(int n){
  if(n < 9){
    return n;
  }
  return (n%10) + sumDigitsRecursive(n/10);
}



int main() {
  cout << sumDigitsRecursive(134) << endl;
  
}

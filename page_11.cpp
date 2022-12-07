#include <climits>
#include <iostream>

using namespace std;

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

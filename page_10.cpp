#include<bits/stdc++.h>
using namespace std;

int power(int base, int exponent){
  // (page 10) Write a recursive function int power(int num, int p) that calculates the value of (nump). 
  if(exponent == 0){
    return 1;
  }
  return base * power(base, exponent - 1);
}

int main(){
    
    return 0;
}


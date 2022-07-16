#include <iostream>

using namespace std;

int main() {
  int *p,*q;
  p = new int;
  *p = 15.88;
  q = new int;
  *q = 23.88;
  cout << *p << " "<< *q << endl;
  *p = *q;
  cout << *p << " " << *q << endl;
  p = q;
  cout << *p << " " << *q << endl;
}
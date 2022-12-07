#include <iostream>

using namespace std;

int main() {
  // A X X X X
  // A A X X X
  // A A A X X
  // A A A A X
  // A A A A A
  // print the following pattern
  for(int i=0;i<5;++i){
    for(int j = 0; j<5;++j){
      if(i>=j){
        cout << "A" << " ";
      }
      else{
        cout << "X" << " ";
      }
    }
    cout << endl;
  }
}
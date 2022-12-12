#include <iostream>
#include <algorithm>

using namespace std;

struct Student{
  string name;
  double gpa;
};

// void getNames(Student students[], int size){
  
// }

bool compare(Student a, Student b){
  if (a.name < b.name){
    return true;
  }
  return false;
}


int main() {
  Student students[5];
  for(int i = 0; i < 5; ++i){
    cin >> students[i].name >> students[i].gpa;
  }
  sort(students, students+5, compare);
  for(int i = 0; i < 5; ++i){
    cout << students[i].name << " " << students[i].gpa << endl;
  }
}

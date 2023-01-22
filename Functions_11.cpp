#include <iostream>
#include <algorithm>

using namespace std;

// Write a C++ program that performs the follow 
//     a. Takes and stores names and GPAs of n students in an array of structs. 
//        The number of students n is a user input between 10 and 50 inclusive. The input of names is done by a function getNames. 
//     b. Call a function Sort to rearrange the list in an ascending a lphabetic order according to the name of the student. 
// Define the necessary swapping functions.

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

// 1. An Instructor has recorded the grades of sn exam of his CSCE 1001 section (25 students) in a file
// (“score.dat”) of two columns, the first contains the first name of the student (recorded without any
// spaces) and the second contains his/her score (integer value ) as follows:
// Karim 70
// Ahmed 90
// Zayed 75
// Dina 80
// Khaled 95
// ………. ….
// ………. ….
// Youssef 66

// Write a modular C++ program to perform the following:
// a. Call a function “input” to read student’s data from the input file “score.dat” to be stored in two arrays
// “name” and “score”.
// b. Call a function “sort” that takes the two arrays “name” and “”score” to rearrange them in descending
// order according to the value of score. Define necessary swap functions.
// c. Call a function “output” that writes the content of the two sorted arrays “name” and “score” to an
// output file “sortedScore.dat” using the same format of the input file “score.dat”.
// d. Call a function “display” that displays on the screen the content of the file “sortedScore.dat”.
// e. Redo the same problem using dynamic arrays.

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student{
  string name;
  int score;
};

vector<Student>students;

void input(){
  ifstream ifile;
  ifile.open("score.dat");
  if(ifile.fail()){
    cout << "ERROR" << endl;
    return;
  }
  while(!ifile.eof()){
    string name;
    int score;
    ifile >> name >> score;
    Student s;
    s.name = name;
    s.score = score;
    students.push_back(s);
  }
  ifile.close();
}

bool compare(Student a, Student b){
  if (a.score > b.score){
    return true;
  }
  return false;
}

void sort(){
  sort(students.begin(), students.end(), compare);
}

void output(){
  ofstream ofile;
  ofile.open("sortedScore.dat");
  for(int i = 0; i < students.size(); ++i){
    ofile << students[i].name << " " << students[i].score << "\n";
  }
  ofile.close();
}

void display(){
  for(int i = 0; i < students.size(); ++i){
    cout << students[i].name << " " << students[i].score << endl;
  }
}

int main() {
  input();
  sort();
  output();
  display();
}

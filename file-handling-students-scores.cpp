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
#include <bits/stdc++.h>

using namespace std;

vector<string>names;
vector<int>scores;

void input(){
  fstream file;
  file.open("score.dat", ios::in);
  if(!file){
    cout <<" Problem creating a file" << endl;
  }
  else {
    string str;
    while(!file.eof()){
      getline(file, str);
      string name = str.substr(0, str.find(" "));
      string score_str = str.substr(str.find(" ")+1, str.length());
      int score = stoi(score_str);
      names.push_back(name);
      scores.push_back(score);
      // cout << name << " " << score << endl;
    }
    file.close();
  }
}

void sort_file_content(){
  sort(names.begin(), names.end(), greater<string>());
  sort(scores.begin(), scores.end(), greater<int>());
}

void output(){
  fstream file;
  file.open("sortedScores.dat", ios::out);
  for(int i = 0;i<names.size();++i){
    file << names[i] << " " << scores[i] << endl;
  }
}

void display(){
  fstream file;
  file.open("sortedScores.dat", ios::in);
  if(!file){
    cout <<" Problem creating a file" << endl;
  }
  else {
    string str;
    while(!file.eof()){
      getline(file, str);
      cout << str << endl;
    }
    file.close();
  }
}


int main() {
  input();
  sort_file_content();
  output();
  display();

  return 0;
}
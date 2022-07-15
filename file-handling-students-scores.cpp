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
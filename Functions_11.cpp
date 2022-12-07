/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>

// Define modular C++ program that performs the following:
// a. Takes and stores names and GPAs of n students in an array. The number of students n is a user input
// between 10 and 50. The input of names is done by a function Input.
// b. Call a function Sort to reaarange the list in an ascending alphabetic order according to the name of the
// student. Define the necessary sawpping functions to swap both the names and GPAs.

using namespace std;

struct Student{
    string name;
    double gpa;
};

bool compareStudent(const Student &a, const Student &b){
    return a.name < b.name;
}

int main()
{
    vector<Student>students;
    string name;
    double gpa;
    for (int i = 0; i < 4; i++) {
        cin >> name;
        cin >> gpa;
        Student student;
        student.name = name;
        student.gpa = gpa;
        students.push_back(student);
    }
    
    sort(students.begin(), students.end(), compareStudent);
    
    for (int i = 0; i < 4; i++) {
        cout << students[i].name << " " << students[i].gpa << endl;
    }
    

    return 0;
}

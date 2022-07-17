/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>

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

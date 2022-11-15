//
// Created by 25952 on 2022/11/13.
//

#ifndef EXO_3_STUDENT_H
#define EXO_3_STUDENT_H

#include <vector>
#include "iostream"
using namespace std;

class Student {
private:
    string name;
    string gender;
    string studentID;
    int score;
    static int count;
    static int totalScore;
public:
    Student(string name, string gender, string studentID, int score);
    static double get_average();
    friend ostream &operator<<(ostream &os, const Student &student);
    void student_info_parser(string file_name, vector<Student> &students);
};


#endif //EXO_3_STUDENT_H

//
// Created by 25952 on 2022/11/13.
//

#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int Student::count = 0;
int Student::totalScore = 0;
Student::Student(string name, string gender, string studentID, int score) {
    this->name = name;
    this->gender = gender;
    this->studentID = studentID;
    this->score = score;
    count = 1;
    totalScore = score;
}

double Student::get_average() {
    return (double) totalScore / (double) count;
}

std::ostream &operator<<(ostream &os, const Student &student){
    os << left << setw(15) << student.name;
    os << left << setw(15) << student.gender;
    os << left << setw(15) << student.studentID;
    os << left << setw(15) << student.score;
    return os;
}

void Student::student_info_parser(string file_name, vector<Student> &students){
    int first = 1;
    char *filePath = "student_info.txt";
    ifstream file;
    file.open(filePath,ios::in);

    if (!file.is_open()) {
        cout << "file to open file";
    }
    string strLine;
    while(getline(file,strLine)) {

        if (strLine.empty()) {
            continue;
        }
        if (first) {
            first = 0;
        }
        else {
            string value[4];
            int j = 0;
            for (int i = 0;i < strLine.size();i++) {
                if (strLine[i] != ' '){
                    value[j] += strLine[i];
                } else if(strLine[i-1] != ' '){
                    j++;
                }
            }
            students.push_back(Student(value[0], value[1], value[2], stoi(value[3],0,10)));
        }
    }
}
#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    Student a("xl","F","21009108888",100);
    vector<Student> students;
    students.push_back(a);
    a.student_info_parser("student_info.txt",students);
    cout << Student::get_average();
}
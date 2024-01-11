#include <iostream>
#include "student.h"
using namespace std;

static int UID = 0;

Student::Student(char* _name, int _group, int _course ):
    UID(counterID++), recordBook(studentID) {
    course = _course;
    name = _name;
    group = _group;
}

Student::Student(const Student& other):
    UID(counterID), recordBook(studentID) {
    name = other.name;
    course = other.course;
    group = other.group;
}
void Student::setName(char* _name) {
    name = _name;
}

void Student::setCourse(int _course) {
    course = _course;
}

void Student::setGroup(int _group) {
    group = _group;
}

char* Student::getName() const {
    return name;
}

int Student::getCourse() const {
    return course;
}
int Student::getGroup() const {
    return group;
}


ostream& operator<<(ostream& os, Student& student) {
    os << "Student's name: ";
    for (int i = 0; i < sizeof(student.name); i++) {
        cout << student.name[i];
    }
    os << "\n course: " << student.course << "\n group: " << student.group << "\n";
    return os;
}

// Session 1

AfterSession1::AfterSession1(char* _name,int _group,int _course,double _grades1[4]) :
        Student(_name, _group,_course) {
    for (int i = 0; i < 4; i++) {
        grades1[i] = _grades1[i];
    }
}
AfterSession1::AfterSession1(Student &other, double _grades1[4]) :
        Student(other) {
    for (int i = 0; i < 4; i++) {
        grades1[i] = _grades1[i];
    }
}

int AfterSession1::getGrade_1(int i) {
    return grades1[i];
}

void AfterSession1::changeGrade_1(int new_grade, int i) {
    grades1[i] = new_grade;
}

ostream& operator<<(ostream& os, AfterSession1& student) {
    os << "Student's name: ";
    for (int i = 0; i < sizeof(student.name); i++) {
        cout << student.name[i];
    }
    os << "\n course: " << student.course << "\n group: " << student.group
       << "\n grades after first session: ";
    for (int i = 0; i < 4; i++) {
        os << student.grades1[i] << " ";
    cout << "\n";
        return os;
    }
}

double AfterSession1::Average() {

    double sum = 0.0;
    for (int i = 0; i < 4; i++) {
        sum += grades1[i];
    }
    return sum / 4.0;
}

// Session 2

AfterSession2::AfterSession2(char* _name, int _group, int _course, double _grades2[5], double _grades1[4]) : AfterSession1(_name, _group, _course, _grades1) {
    for (int i = 0; i < 5; i++) {
        grades2[i] = _grades2[i];
    }
}
AfterSession2::AfterSession2(AfterSession1 &other, double *_grades2) :
        AfterSession1(other) {
    this->name = other.getName();
    this->course = other.getCourse();
    this->group = other.getGroup();
}

int AfterSession2::getGrade_2(int i) {
    return grades2[i];
}

int AfterSession2::changeGrade_2(double new_grade, int i) {
    grades2[i] = new_grade;
}

ostream& operator<<(ostream& os, AfterSession2& student) {
    os << "Student's name: ";
    for (int i = 0; i < sizeof(student.name); i++) {
        cout << student.name[i];
    }
    os << "\n course: " << student.course << "\n group: " << student.group
       << "\n grades after second session: ";
    for (int i = 0; i < 4; i++) {
        os << student.grades2[i] << " ";
        cout << "\n";
        return os;
    }
}

double AfterSession2::Average() {

    double sum = 0.0;
    for (int i = 0; i < 4; i++) {
        sum += grades1[i];
    }

    double sumAll = sum;
    for (int i = 0; i < 5; i++) {
        sumAll += grades1[i];
    }
    return sumAll / 9.0;
}

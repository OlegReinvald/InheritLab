#include <iostream>
#include <vector>
#include "Student.h"


using namespace std;

int main()
{
    vector<Student*> students;

    students.push_back(new Student("Ivanov Ivan", 1, 1, 1));
    students.push_back(new StudentAfterFirstSession("Petrov Petr", 1, 1, 1, 4.5f, 5.0f, 3.5f, 4.0f));
    students.push_back(new StudentAfterSecondSession("Sidorov Sergey", 1, 1, 1, 4.5f, 5.0f, 3.5f, 4.0f, 5.0f));

    for (auto& student : students) {
        cout << student << endl;
    }

    return 0;
}


StudentAfterFirstSession::StudentAfterFirstSession(const char* name, int course, int group, int number, float grade1, float grade2, float grade3, float grade4) :
        Student(name, course, group, number), grade1_(grade1), grade2_(grade2), grade3_(grade3), grade4_(grade4)
{
}

StudentAfterFirstSession::~StudentAfterFirstSession()
{
}

float StudentAfterFirstSession::getGrade1() const
{
    return grade1_;
}

void StudentAfterFirstSession::setGrade1(float grade1)
{
    grade1_ = grade1;
}

float StudentAfterFirstSession::getGrade2() const
{
    return grade2_;
}

void StudentAfterFirstSession::setGrade2(float grade2)
{
    grade2_ = grade2;
}

float StudentAfterFirstSession::getGrade3() const
{
    return grade3_;
}

void StudentAfterFirstSession::setGrade3(float grade3)
{
    grade3_ = grade3;
}

float StudentAfterFirstSession::getGrade4() const
{
    return grade4_;
}

void StudentAfterFirstSession::setGrade4(float grade4)
{
    grade4_ = grade4;
}


StudentAfterSecondSession::StudentAfterSecondSession(const char* name, int course, int group, int number, float grade1, float grade2, float grade3, float grade4, float grade5) :
        StudentAfterFirstSession(name, course, group, number, grade1, grade2, grade3, grade4), grade5_(grade5)
{
}

StudentAfterSecondSession::~StudentAfterSecondSession()
{
}

float StudentAfterSecondSession::getGrade5() const
{
    return grade5_;
}

void StudentAfterSecondSession::setGrade5(float grade5)
{
    grade5_ = grade5;
}
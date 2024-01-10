#pragma once
#include <iostream>
using namespace std;

class Student {
protected:
    char* name;
    int course;
    int group;
    const int recordBook;
    static int UID;

public:
    Student(char* _name, int _course, int _group);
    Student(const Student& other);
    Student() = delete;
    void setName(char* name);
    void setCourse(int _course);
    void setGroup(int _group);
    char* getName() const;
    int getCourse() const;
    int getGroup() const;
    virtual double Average();
    friend ostream& operator<<(ostream& os, Student& student);
};


class AfterSession1 : public Student {
protected:
    int grades1[4];

public:
    AfterSession1(char* _name, int _group, int _course, double _grades1[4]);
    AfterSession1(Student& other, double _grades1[4]);
    int getGrade_1(int i);
    void changeGrade_1(int new_grade, int i);
    friend ostream& operator<<(ostream& os, AfterSession1& student);
    double Average() override;
};


class AfterSession2 : public AfterSession1 {
protected:
    int grades2[5];

public:
    AfterSession2(char* _name, int _course, int _group, double _grades5[5], double _grades1[4]);
    AfterSession2(AfterSession1& other, double _grades2[5]);
    int getGrade_2(int i);
    int changeGrade_2(double new_grade, int i);
    friend ostream& operator<<(ostream& os, AfterSession2& student);
    double Average() override;
};
#pragma once
#ifndef INHERITANCE_CLASS_H
#define INHERITANCE_CLASS_H
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;
class Student {
protected:
    int course;
    int group;
    const int id;
    int number;
    char* name;
public:
    string classname = "Student";
    virtual double getAvgMarkAfterFirstSession(){
        return 0;
    };
    virtual double getAvgMarkAfterSecondSession(){
        return 0;
    };
    Student(char* name, int course, int group, int number);
    Student (const Student &F);
    int get_course() const;
    void set_course(int a);
    int get_group() const;
    void set_group(int a);
    int get_id();
    int get_number() const;
    char * get_name() const;
    char* get_namecopy() const;
    void set_name(char* name);
    friend ostream& operator<<(ostream& out,Student F);
};
class StudentAfterFirstSession : public Student {
protected:
    int marks[4];
public:
    string classname = "StudentAfterFirstSession";
    double get_avgMarkAft1session();
    int get_1mark() const;
    void set_1mark(int a);
    int get_2mark() const;
    void set_2mark(int b);
    int get_3mark() const;
    void set_3mark(int c);
    int get_4mark() const;
    void set_4mark(int d);

    StudentAfterFirstSession(const StudentAfterFirstSession &F);
    StudentAfterFirstSession(const Student &F,int a,int b,int c,int d);
    friend ostream& operator<<(ostream& out,const StudentAfterFirstSession& F);
};
class StudentAfterSecondSession : public StudentAfterFirstSession {
private:
    int nmarks[5];
public:
    string classname = "StudentAfterSecondSession";
    double get_avgMarkAft2session() ;
    int get_1nmark();
    void set_1nmark(int a);
    int get_2nmark();
    void set_2nmark(int b);
    int get_3nmark();
    void set_3nmark(int c);
    int get_4nmark();
    void set_4nmark(int d);
    int get_5nmark();
    void set_5nmark(int e);

    StudentAfterSecondSession(const StudentAfterFirstSession &F, int a, int b, int c, int d, int e);
    friend ostream& operator<<(ostream& out, StudentAfterSecondSession F);
};
#endif //INHERITANCE_CLASS_H
#include "Student.h"
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int l(0);
Student::Student(char* name, int course, int group, int number) : id(l++) {
    this->course = course;
    this->group = group;
    this->name =new char[strlen(name)];
    strcpy(this->name,name);
    this->number=number;
}
Student::Student(const Student &F) : id(l++) {
    this->course = F.course;
    this->group = F.group;
    this->number=F.number;
    this->name = new char[strlen(F.name)];
    strcpy(this->name,F.name);
}

int Student::get_course() const {
    return course;
}

int Student::get_group() const {
    return group;
}

int Student::get_id() {
    return id;
}

int Student::get_number() const {
    return number;
}

char * Student::get_name() const {
    return name;
}
ostream &operator<<(ostream &out, Student F) {
    cout << "Id: " << F.id << endl;
    cout << "Name: " << F.name << endl;
    cout << "Number: " << F.number<<endl;
    cout <<"Group: " << F.group<<endl;
    cout<<"Course: "<<F.course<<endl;
    return out;
}

void Student::set_course(int a) {
    this->course=a;
}

void Student::set_group(int a) {
    this->group=a;
}

void Student::set_name(char* name) {
    this->name =new char[strlen(name)];
    strcpy(this->name,name);
}

char *Student::get_namecopy() const {
    size_t len = strlen(name);
    char* new_name = new char[len];
    strcpy(new_name,name);
    return new_name;
}

StudentAfterFirstSession::StudentAfterFirstSession(const Student &F, int a, int b, int c, int d): Student(F) {
    marks[0]=a;
    marks[1]=b;
    marks[2]=c;
    marks[3]=d;
}

StudentAfterFirstSession::StudentAfterFirstSession(const StudentAfterFirstSession &F): Student(F)  {
    this->marks[0]=F.marks[0];
    this->marks[1]=F.marks[1];
    this->marks[2]=F.marks[2];
    this->marks[3]=F.marks[3];
}

ostream &operator<<(ostream &out, const StudentAfterFirstSession& F) {\
    cout << "Id: " << F.id << endl;
    cout << "Name: ";
    for(int i=0;i< strlen(F.name); i++) {
        cout << F.name[i];
    }
    cout << endl;
    cout << "Number: " << F.number<<endl;
    cout <<"Group: " << F.group<<endl;
    cout<<"Course: "<<F.course<<endl;
    cout <<"Marks after 1 session: ";
    for (int i=0;i<4;i++) {
        cout << F.marks[i]<<" ";
    }
    cout << endl;
    return out;
}

int StudentAfterFirstSession::get_1mark() const {
    return marks[0];
}

int StudentAfterFirstSession::get_2mark() const {
    return marks[1];
}

int StudentAfterFirstSession::get_3mark() const {
    return marks[2];
}

int StudentAfterFirstSession::get_4mark() const {
    return marks[3];
}

void StudentAfterFirstSession::set_1mark(int a) {
    this->marks[0]=a;
}

void StudentAfterFirstSession::set_2mark(int b) {
    this->marks[1]=b;
}

void StudentAfterFirstSession::set_3mark(int c) {
    this->marks[2]=c;
}

void StudentAfterFirstSession::set_4mark(int d) {
    this->marks[3]=d;
}

double StudentAfterFirstSession::get_avgMarkAft1session() {
    double sum;
    sum = marks[0]+marks[1]+marks[2]+marks[3];
    return (sum/4);
}

ostream &operator<<(ostream &out, StudentAfterSecondSession F) {\
    cout << "Id: " << F.id << endl;
    cout << "Name: ";
    for(int i=0;i< strlen(F.name); i++) {
        cout << F.name[i];
    }
    cout << endl;
    cout << "Number: " << F.number<<endl;
    cout <<"Group: " << F.group<<endl;
    cout<<"Course: "<<F.course<<endl;
    cout <<"Marks after 1 session: ";
    for (int i=0;i<4;i++) {
        cout << F.marks[i]<<" ";
    }
    cout << endl;
    cout <<"Marks after 2 session: ";
    for (int i=0;i<5;i++) {
        cout << F.nmarks[i]<<" ";
    }
    cout << endl;
    return out;
}

StudentAfterSecondSession::StudentAfterSecondSession(const StudentAfterFirstSession &F, int a, int b, int c, int d, int e): StudentAfterFirstSession(F) {
    this->nmarks[0]=a;
    this->nmarks[1]=b;
    this->nmarks[2]=c;
    this->nmarks[3]=d;
    this->nmarks[4]=e;
}

int StudentAfterSecondSession::get_1nmark() {
    return nmarks[0];
}

int StudentAfterSecondSession::get_2nmark() {
    return nmarks[1];
}

int StudentAfterSecondSession::get_3nmark() {
    return nmarks[2];
}

int StudentAfterSecondSession::get_4nmark() {
    return nmarks[3];
}

int StudentAfterSecondSession::get_5nmark() {
    return nmarks[4];
}

void StudentAfterSecondSession::set_1nmark(int a) {
    this->nmarks[0]=a;
}

void StudentAfterSecondSession::set_2nmark(int b) {
    this->nmarks[1]=b;
}

void StudentAfterSecondSession::set_3nmark(int c) {
    this->nmarks[2]=c;
}

void StudentAfterSecondSession::set_4nmark(int d) {
    this->nmarks[3]=d;
}

void StudentAfterSecondSession::set_5nmark(int e) {
    this->nmarks[4]=e;
}

double StudentAfterSecondSession::get_avgMarkAft2session() {
    double sum;
    sum = marks[0]+marks[1]+marks[2]+marks[3]+nmarks[0]+nmarks[1]+nmarks[2]+nmarks[3]+nmarks[4];
    return (sum/9);
}
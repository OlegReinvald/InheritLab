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
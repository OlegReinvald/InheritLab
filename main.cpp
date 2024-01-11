# include "iostream"
#include "Student.h"

using namespace std;

int main(){
    Student("Oleg", 1, 2);
    double grades[4] = {1, 2, 3, 4};
    AfterSession1("Oleg", 1, 2, grades);
    double grades2[5] = {1, 2 ,3, 4, 5};
    AfterSession2("Oleg", 1, 2, grades, grades2);
}


class Student {
public:
    Student(const char* name, int course, int group, int number);
    ~Student();

    const char* getName() const;
    void setName(const char* name);

    int getCourse() const;
    void setCourse(int course);

    int getGroup() const;
    void setGroup(int group);

    int getNumber() const;
    void setNumber(int number);

private:
    unsigned long id_;
    char* name_;
    int course_;
    int group_;
    int number_;
};


class StudentAfterFirstSession : public Student {
public:
    StudentAfterFirstSession(const char* name, int course, int group, int number, float grade1, float grade2, float grade3, float grade4);
    ~StudentAfterFirstSession();

    float getGrade1() const;
    void setGrade1(float grade1);

    float getGrade2() const;
    void setGrade2(float grade2);

    float getGrade3() const;
    void setGrade3(float grade3);

    float getGrade4() const;
    void setGrade4(float grade4);

private:
    float grade1_;
    float grade2_;
    float grade3_;
    float grade4_;
};


class StudentAfterSecondSession : public StudentAfterFirstSession {
public:
    StudentAfterSecondSession(const char* name, int course, int group, int number, float grade1, float grade2, float grade3, float grade4, float grade5);
    ~StudentAfterSecondSession();

    float getGrade5() const;
    void setGrade5(float grade5);

private:
    float grade5_;
};


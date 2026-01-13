#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
public:
    Student();
    Student(string id, double score);

    void setData(string id, double score);  
    void display() const;                  
    string getId() const;                   
    double getScore() const;                

private:
    string studentId; 
    double score;    
};

void findMaxScore(Student* students, int n);  
#endif

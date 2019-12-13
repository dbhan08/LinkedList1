#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class Student {
public:
    
   Student(char* first, char* last, int newid, float gpa);
  
    char* getFirst();
    char* getLast();
    int getId();
    float getGpa();
    ~Student();
private:
    char* firstName;
    char* lastName;
    float gpa;
    int Id;
};

#endif
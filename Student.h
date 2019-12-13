
#define STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class Student {
public:

char* getFirst();
char* getLast();
int getId();
float getGpa();
~Student();
private:
char* firstName;
char* lastName;
float gpa;
int id;
};





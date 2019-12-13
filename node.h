#define NODE_H

#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

class Node{
public:
Node();
~Node();
void setStudent(Student* newStudent);
Student* getStudent();
void setNext(Node* newNode);
Node* getNode();
private:
Student* student;
Node* nextNode;




};

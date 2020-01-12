#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

class Node{
public:
    Node(Student* newStudent);
    ~Node();
    void setStudent(Student* newStudent);
    Student* getStudent();
    void setNext(Node* newNode);
    Node* getNext();
private:
    Student* student;
    Node* nextNode;
    
    
    
    
};
#endif

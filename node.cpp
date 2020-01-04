#include <iostream>
#include <cstring>
#include "Node.h"

Node::Node() {
    nextNode = NULL;
    
}



Node::~Node() {
    delete student;
    
}

void Node::setStudent(Student* newStudent) {
    student = newStudent;
    
}

Student* Node::getStudent() {
    return student;
}

Node* Node::getNext() {
    return nextNode;
}

void Node::setNext(Node* newNode) {
    nextNode = newNode;
}



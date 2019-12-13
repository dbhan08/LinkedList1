#include <iostream>
#include "Student.h"
#include <cstring>

using namespace std;



Student::~Student() {
	delete &firstName;
	delete &lastName;

}

char* Student::getFirst() {
	return firstName;

}

char* Student::getLast() {
return lastName;

}

int Student::getId() {
return id;

}

float Student::getGpa() {
return gpa;

}

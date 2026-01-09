#include "Student.h"
#include <iostream>

void Student::setGpa(float _gpa) 
{
	gpa = _gpa;
}
float Student::getGpa()
{
	return gpa;
}

void Student::DisplayRecord()
{
	std::cout << "gpa = " << Student::getGpa() << std::endl;
	Base::DisplayRecord();
}
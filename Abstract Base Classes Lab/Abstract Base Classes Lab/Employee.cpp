#include "Employee.h"
#include <iostream>

void Employee::setSalary(int _salary) 
{
	salary = _salary;
}
int Employee::getSalary()
{
	return salary;
}

void Employee::DisplayRecord() 
{
	std::cout << "salary = " << getSalary() << std::endl;
	Base::DisplayRecord();
}
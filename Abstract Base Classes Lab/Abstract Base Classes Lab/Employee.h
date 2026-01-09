#pragma once
#include "Base.h"
class Employee :
    public Base
{
    private:
        int salary;
public:
        void setSalary(int _salary);
        int getSalary();

        void DisplayRecord();

};


#pragma once
#include "Base.h"
class Student :
    public Base
{
private: 
    float gpa;

public:
   void setGpa(float _gpa);
   float getGpa();

   void DisplayRecord();
};


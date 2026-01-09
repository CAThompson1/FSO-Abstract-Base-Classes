#include "Base.h"
#include <iostream>

void Base::SetName(const char* _name)
{
	if(name != nullptr)
	{
		delete[] name;
	}

	int length = strlen(_name) + 1;
	name = new char[length];
	strcpy_s(name, length, _name);

}
char* Base::GetName() 
{

	return name;
}

Base::Base() 
{
	SetName("Unknown");
}
Base::~Base() 
{
	delete[] name;
}
Base& Base::operator=(const Base& t)
{
	if (this != &t)
	{
		SetName(t.name);
	}

	return *this;
}
Base::Base(const Base& t) 
{
	*this = t;
}
void Base::DisplayRecord()
{
	std::cout << "name = " << Base::GetName() << std::endl;
}


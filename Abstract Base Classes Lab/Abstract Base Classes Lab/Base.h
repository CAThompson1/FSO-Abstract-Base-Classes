#pragma once
class Base
{
private:
	char* name = nullptr;

public:
	void SetName(const char* _name);

	char* GetName();

	virtual void DisplayRecord() = 0;

	Base();
	~Base();
	Base& operator=(const Base& t);
	Base(const Base& t);
};


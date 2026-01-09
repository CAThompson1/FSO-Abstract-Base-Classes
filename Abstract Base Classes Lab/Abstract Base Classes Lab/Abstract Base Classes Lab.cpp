// Abstract Base Classes Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Base.h"
#include "Employee.h"
#include "Student.h"

void AddRecord(std::vector<Base*>& v);
void DisplayRecords(std::vector<Base*>& v);
void DuplicateRecord(std::vector<Base*>& v);

int main()
{
    std::vector<Base*> based;


    int menuChoice = 0;


    while (menuChoice != 4) 
    {
    std::cout << "Welcome to the records" << std::endl;
    std::cout << "What would you like to start with today?" << std::endl;

    std::cout << "1-Add a record" << std::endl;
    std::cout << "2-display records" << std::endl;
    std::cout << "3-duplicate records" << std::endl;
    std::cout << "4-Exit app" << std::endl;

    std::cin >> menuChoice;

    int choice;


        switch (menuChoice) 
        {
        case 1:
            system("cls");
            AddRecord(based);
            break;

        case 2:
            system("cls");
            DisplayRecords(based);
            break;

        case 3:
            system("cls");
            DuplicateRecord(based);
            break;

        case 4:
            system("cls");
            std::cout << "exiting app" << std::endl;
            break;
        }



    }
    for (int i = 0; i < based.size(); i++) 
    {
        delete based[i];
    }
}

void AddRecord(std::vector<Base*>& v)
{
    Employee* eptr = new Employee();
    Student* sptr = new Student();

    int salary;
    float gpa;
    int choice;
    char personName[32];
    std::cout << "which record type would you like to add? " << std::endl;
    std::cout << " 1-Employee" << std::endl;
    std::cout << " 2-student" << std::endl;
    std::cin >> choice;
    if (choice == 1) 
    {
        

        std::cout << "please start by telling the name for this employee: " << std::endl;
        std::cin >> personName;
        eptr->SetName(personName);
        system("cls");
        std::cout << "now please tell us the salary of the employee: "<< std::endl;
        std::cin >> salary;
        eptr->setSalary(salary);
        system("cls");
        std::cout << "the employee you added is " << personName << "and their salary is " << salary << std::endl;
        v.push_back(eptr);
        system("pause");
        system("cls");

    }
    if (choice == 2) 
    {
        std::cout << "please start by telling the name for this student: " << std::endl;
        std::cin >> personName;
        sptr->SetName(personName);
        system("cls");
        std::cout << "now please tell us the GPA of the student: " << std::endl;
        std::cin >> gpa;
        sptr->setGpa(gpa);
        system("cls");
        std::cout << "the student you added is " << sptr->GetName() << " and their gpa is " << sptr->getGpa() << std::endl;
        v.push_back(sptr);
        system("pause");
        system("cls");
    }
    else
    {
        std::cout << "invalid input, returning to main menu..." << std::endl;
        system("pause");
        system("cls");
    }
    delete sptr;
    delete eptr;

}
void DisplayRecords(std::vector<Base*>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        
        v[i]->DisplayRecord();
    }
    system("pause");
    system("cls");
}
void DuplicateRecord(std::vector<Base*>& v)
{
    int posOfDupe;
    std::cout << "At which index do you wish to duplicate? " << std::endl;
    std::cin >> posOfDupe;
    
    Employee* employDupe = dynamic_cast<Employee*>(v[posOfDupe]);
    if (employDupe != nullptr)
    {
        employDupe = new Employee;
        v.push_back(employDupe);
        delete employDupe;
        std::cout << "Employee replicated!!!" << std::endl;
    }
    Student* studDupe = dynamic_cast<Student*>(v[posOfDupe]);
    if (studDupe != nullptr)
    {
        studDupe = new Student;
        v.push_back(studDupe);
        delete studDupe;
        std::cout << "Student replicated!!!" << std::endl;
    }
    system("pause");
    system("cls");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

//
// Created by katerina on 08.05.21.
//

#include "Staff.h"

Staff::Staff(int id, string name, int salary, string profession)
{
    this->id=id;
    this->name=name;
    this->salary=salary;
    this->profession=profession;
}

string Staff::GetName()
{
    return this->name;
}

void Staff::ChangeSalary(int salary)
{
    this->salary=salary;
}

int Staff::GetId()
{
    return this->id;
}

Staff::~Staff()
{
    delete this;
}
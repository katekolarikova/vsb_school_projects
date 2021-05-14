//
// Created by katerina on 08.05.21.
//

#ifndef KOL0436_OOP_PROJEKT_ZOO_STAFF_H
#define KOL0436_OOP_PROJEKT_ZOO_STAFF_H
#include <iostream>
using namespace std;

/* This class describe staff, which might be working in the zoo, for example zookeeper, vet...*/
class Staff
{
private:
    int id;
    string name;
    int salary;
    string profession;
public:
    Staff(int id, string name, int salary, string profession);
    ~Staff();
    void ChangeSalary(int salary);
    /* This methods returns an id which is used for identifying*/
    int GetId();
    /* This method returns first and last name of the person*/
    string GetName();




};


#endif //KOL0436_OOP_PROJEKT_ZOO_STAFF_H

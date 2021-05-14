//
// Created by katerina on 08.05.21.
//

#ifndef KOL0436_OOP_PROJEKT_ZOO_BUILDING_H
#define KOL0436_OOP_PROJEKT_ZOO_BUILDING_H
#include <iostream>
using std::string;

/* This class is a parent class for two classes - Visitor Centre and Pavilion. */
class Building {
protected:
    int id_building;
    int capacity;
    string name;
public:
    Building(int id_building, int capacity, string name);
    //virtual ~Building();
    virtual void SetCapacity(int new_kapacity)=0;
};


#endif //KOL0436_OOP_PROJEKT_ZOO_BUILDING_H

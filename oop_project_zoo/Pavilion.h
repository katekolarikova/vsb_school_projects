//
// Created by katerina on 08.05.21.
//

#ifndef KOL0436_OOP_PROJEKT_ZOO_PAVILION_H
#define KOL0436_OOP_PROJEKT_ZOO_PAVILION_H
#include "Animal.h"
#include "Staff.h"
#include "Building.h"
#include <iostream>

/* This class represent a pavillion where animals could live. The amount of visitors in the building is limited by the count of animals*/
class Pavilion: public Building
{
private:
    Staff* st;
    Animal** animals;
    int count_animal;
    int max_animals;
public:
    Pavilion(int id_building, int capacity, std::string name, Staff* st, int max_animals);
    ~Pavilion();
    /* This method returns a zookeeper, who takes care about the pavilion.*/
    Staff* GetStaff();
    /* The capacity of the building depends on a number of animals. This method change the capacity when it is possible*/
    void SetCapacity(int new_capacity);
    /* This method add a new animal to the pavilion. When the capacity is full, the request id denied.*/
    void AddAnimal(Animal* a);
    /* This method removes animal from pavilion*/
    void RemoveAnimal(Animal* a);
    /*this method prints names of all animals, which are in the pavilion*/
    void PrintListOfAnimals();
};


#endif //KOL0436_OOP_PROJEKT_ZOO_PAVILION_H

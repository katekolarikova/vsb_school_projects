//
// Created by katerina on 08.05.21.
//

#ifndef KOL0436_OOP_PROJEKT_ZOO_PADDOCK_H
#define KOL0436_OOP_PROJEKT_ZOO_PADDOCK_H
#include "Animal.h"
#include <iostream>
using std::string;
/* This class represents an outdoor paddock for animals.
 * The number of animals is limited by area.
 * */
class Paddock
{
private:
    Animal** animals;
    int count_animals;
    string name;
    int area;
    int max_animals;
public:
    Paddock(string name, int area);
    ~Paddock();
    /* This method adds new animals to the paddock. If the capacity of the paddock id full, the request is denied*/
    void AddAnimal(Animal* an);
    /* This method prints a description for each animal in paddock*/
    void PrintDescriptionOfAnimals();
};


#endif //KOL0436_OOP_PROJEKT_ZOO_PADDOCK_H

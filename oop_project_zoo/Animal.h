//
// Created by katerina on 08.05.21.
//

#ifndef KOL0436_OOP_PROJEKT_ZOO_ANIMAL_H
#define KOL0436_OOP_PROJEKT_ZOO_ANIMAL_H
#include <iostream>
#include "PrintPoster.h"
using std::string;

/* This class is used for creating different animals*/
class Animal {
private:
    string name;
    string kind;
    int age;
    string origin;
    string description;
    int feed_amount;
public:
    Animal(string name, int age, string kind, string origin, string description);
    ~Animal();
    /* This method prints a description of animal*/
    void PrintPosters();
    /* This method sets a feed ration according to age of the animal*/
    void CountFeed();
    string GetKind();
};


#endif //KOL0436_OOP_PROJEKT_ZOO_ANIMAL_H

//
// Created by katerina on 08.05.21.
//

#ifndef KOL0436_OOP_PROJEKT_ZOO_VISITORCENTRE_H
#define KOL0436_OOP_PROJEKT_ZOO_VISITORCENTRE_H
#include "Building.h"
#include <iostream>
#include "PrintPoster.h"
using std::string;

/* This class represents Visitor Centre - a building full of exponates which are used for education*/
/* Also some guid tours are possible there*/
class VisitorCentre: public Building, public PrintPoster
{
    string exposition_name;
    int count_exponates;
    string tour_time;
public:
    VisitorCentre(int id_building, int capacity, string name, string exposition_name, int count_exponates, string tour_time);
    ~VisitorCentre();
    /* This method changes capacity og building*/
    void SetCapacity(int new_capacity);
    /* This method prints poster, which might be used as a billboard*/
    void PrintPosters();
    /*This method sets a new time for a guide tour*/
    void ChangeTime(string time);

};


#endif //KOL0436_OOP_PROJEKT_ZOO_VISITORCENTRE_H

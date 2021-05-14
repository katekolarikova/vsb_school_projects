//
// Created by katerina on 09.05.21.
//

#ifndef KOL0436_OOP_PROJEKT_ZOO_PRINTPOSTER_H
#define KOL0436_OOP_PROJEKT_ZOO_PRINTPOSTER_H


/* abstract class for Visitor centre and Animal*/
class PrintPoster {
public:
    /* Print some additional info about the object. The result can be presented to the customer*/
    virtual void PrintPosters()=0;
};


#endif //KOL0436_OOP_PROJEKT_ZOO_PRINTPOSTER_H

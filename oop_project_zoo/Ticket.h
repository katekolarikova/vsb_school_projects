//
// Created by katerina on 11.05.21.
//

#ifndef KOL0436_OOP_PROJEKT_ZOO_TICKET_H
#define KOL0436_OOP_PROJEKT_ZOO_TICKET_H
#include <iostream>
using std::string;
/* This class represents tickets. The price can be changed or some season discounts are possible as well. Default price is 150.
 * Each ticket can have a custom description. The date parameter describes the date of purchase.
 */
class Ticket {
private:
    int price;
    string description;
    string date;
public:
    Ticket();
    Ticket(string description, string date);
    ~Ticket();
    void PrintTicket();
    /*This method sets a new price. The parametr is a new price of the ticket*/
    void ChangePrice(int new_price);
    /* The parametr discount is number, which should be subtract from price*/
    void CreateDiscount(int discount);

};


#endif //KOL0436_OOP_PROJEKT_ZOO_TICKET_H

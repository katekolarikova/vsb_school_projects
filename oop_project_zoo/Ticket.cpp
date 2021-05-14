//
// Created by katerina on 11.05.21.
//

#include "Ticket.h"
#include <iostream>
using std::cout;
using std::endl;

Ticket::Ticket()
{
    this->price=150;
    this->description="This is free ticket";
    this->date="XXX";
}

Ticket::Ticket(string description, string date)
{
    this->price=150;
    this->description=description;
    this->date=date;
}

void Ticket::PrintTicket()
{
    cout<< "Thank You for your visit!"<<endl;
    cout<<"Price: "<< this->price<<endl;
    cout<< this->description<<endl;
    cout<<"Date: "<< this->date<<endl;
}


Ticket::~Ticket()
{
    delete this;
}

void Ticket::CreateDiscount(int discount)
{
    this->price-=discount;
}

void Ticket::ChangePrice(int new_price)
{
    this->price=new_price;
}
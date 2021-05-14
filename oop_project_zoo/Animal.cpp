//
// Created by katerina on 08.05.21.
//

#include "Animal.h"
#include <iostream>
using std::cout;
using std::endl;

Animal::Animal(string name, int age, string kind, string origin, string description)
{
    this->name=name;
    this->age=age;
    this->origin=origin;
    this->description=description;
    this->kind=kind;
    this->feed_amount=50;
}

Animal::~Animal()
{
    delete this;
}

void Animal::CountFeed()
{
    if (this->age<=1)
    {
        this->feed_amount=100;
    }
    else if (this->age>1 && this->age<=10)
    {
        this->feed_amount=250;
    }
    else if (this->age>10)
    {
        this->feed_amount=200;
    }
}

void Animal::PrintPosters()
{
    cout<<"Do you want to know anything about me? Lets continue with reading!"<<endl;
    cout<<"name: "<< this->name<<endl;
    cout<<"kind: "<< this->kind<<endl;
    cout<<"something interesting: "<< this->description<<endl;

}

string Animal::GetKind()
{
    return this->kind;
}
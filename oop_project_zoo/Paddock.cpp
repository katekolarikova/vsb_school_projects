//
// Created by katerina on 08.05.21.
//

#include "Paddock.h"
#include <iostream>
using std::cout;
using std::endl;

Paddock::Paddock(string name, int area)
{
    this->name=name;
    this->area=area;
    this->max_animals=area/6;
    this->animals=new Animal*[max_animals];
    this->count_animals=0;

}

Paddock::~Paddock()
{
    for (int i = 0; i < this->count_animals ; ++i)
    {
        delete this->animals[i];
    }
    delete[] this->animals;
}

void Paddock::AddAnimal(Animal *an)
{
    if(this->count_animals< this->max_animals-1){
        this->animals[this->count_animals]=an;
        this->count_animals+=1;
    }
    else
    {
        cout<<"This paddock is full!"<<endl;
    }
}

void Paddock::PrintDescriptionOfAnimals()
{

    for (int i = 0; i < this->count_animals ; ++i)
    {
        Animal *a= this->animals[i];
        a->PrintPosters();
    }
    cout<<endl;
}
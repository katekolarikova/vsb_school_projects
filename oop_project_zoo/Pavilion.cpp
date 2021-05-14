//
// Created by katerina on 08.05.21.
//

#include "Pavilion.h"
#include <iostream>
using std::cout;
using std::endl;
Pavilion::Pavilion(int id_building, int capacity, string name, Staff* st, int max_animals) : Building(id_building, capacity, name)
{
    this->st=st;
    this->count_animal=0;
    this->animals=new Animal*[max_animals];
    this->max_animals=max_animals;
}

void Pavilion::AddAnimal(Animal* a)
{
    if(count_animal<max_animals-1){
        this->animals[count_animal]=a;
        this->count_animal++;
    }
    else
    {
        cout<<"This pavilion is full!"<<endl;
    }
}

void Pavilion::RemoveAnimal(Animal* a)
{
    for (int i = 0; i < this->count_animal; ++i)
    {
        Animal* an= this->animals[i];
        if (an==a)
        {
            for (int j = i+1; j <this->count_animal ; ++j)
            {
            Animal* an2= this->animals[j];
            this->animals[j-1]=an2;
            }
            this->count_animal--;
            break;
        }
    }
}

void Pavilion::SetCapacity(int new_kapacity)
{
    int limit= this->count_animal/2;
    if (limit*3<new_kapacity)
    {
        cout<<"The limit is 3 visitore per animal. The new capacity is too height."<<endl;
    }
    else
    {
        this->capacity=new_kapacity;
    }
}

Staff * Pavilion::GetStaff()
{
    return this->st;
}

Pavilion::~Pavilion()
{
    for (int i = 0; i < this->count_animal ; ++i)
    {
        delete this->animals[i];
    }
    delete[] this->animals;
}

void Pavilion::PrintListOfAnimals()
{
    cout<<"List of animals: ";
    for (int i = 0; i < this->count_animal ; ++i)
    {
        Animal *a= this->animals[i];
        cout<< a->GetKind()<<" ";

    }
    cout<<endl;
}
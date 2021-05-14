//
// Created by katerina on 08.05.21.
//

#include "VisitorCentre.h"
#include <iostream>
using std::cout;
using std::endl;

VisitorCentre::VisitorCentre(int id_building, int capacity, string name, string exposition_name, int count_exponates,
                             string tour_time) : Building(id_building, capacity, name)
{
    this->exposition_name=exposition_name;
    this->count_exponates=count_exponates;
    this->tour_time=tour_time;
    this->capacity=capacity;
}

VisitorCentre::~VisitorCentre()
{
    delete this;
}

void VisitorCentre::ChangeTime(string time)
{
    this->tour_time=time;
}

void VisitorCentre::SetCapacity(int new_capacity)
{
    this->capacity=new_capacity;
}

void VisitorCentre::PrintPosters()
{
    cout<<"Do you want to see something amazing?"<<endl;
    cout<<"Lets visit our "<< this->exposition_name<<" exposition, which has "<< this->count_exponates<< " exponates!!!"<<endl;
    cout<<"The tour starts at: "<< this->tour_time<<endl;
}
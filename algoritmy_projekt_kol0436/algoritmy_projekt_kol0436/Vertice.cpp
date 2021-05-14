//
// Created by katerina on 26.04.21.
//

#include "Vertice.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Vertice::Vertice(char name, int position)
{
    this->name = name;
    this->visit = -1;
    this->position = position;
}

void Vertice::PrintVertice()
{
    cout << "(" << this->name << ")" << endl;
}

char Vertice::GetName()
{
    return this->name;
}
void Vertice::SetVisit(int i)
{
    this->visit = i;
}

int Vertice::GetVisit()
{
    return this->visit;
}

int Vertice::GetPosition()
{
    return this->position;
}



#include "Edge.h"
#include <iostream>

using std::endl;
using std::cout;

Edge::Edge(Vertice* verticle1, Vertice* verticle2)
{
    this->vertice1 = verticle1;
    this->vertice2 = verticle2;
}

void Edge::PrintEdge()
{
    cout << this->vertice1->GetName() << " - " << this->vertice2->GetName() << endl;
}

Vertice* Edge::GetVertice1()
{
    return this->vertice1;
}


Vertice* Edge::GetVertice2()
{
    return this->vertice2;
}

//Edge::~Edge()
//{
  //  delete this->vertice1;
   //delete this->vertice2;
//}
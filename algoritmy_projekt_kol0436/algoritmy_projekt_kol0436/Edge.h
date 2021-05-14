#pragma once
#include "Vertice.h"

///Class Edge represents a connection between two vertices 
///
/// Main task of this class is to connect two vertices with an edge.
class Edge
{
private:
    Vertice* vertice1;
    Vertice* vertice2;
public:
    /// Constructor, which connects two vertices.
    Edge(Vertice* vertice1, Vertice* vertice2);
    
    /// This method prints names of the vertices conected with this edge.
    void PrintEdge();
    /// This method returns the first vertice of the edge.
    /// @return vertice1 First vertice
    Vertice* GetVertice1();
    /// This method returns the second vertice of the edge.
    /// @return vertice2 Second vertice 
    Vertice* GetVertice2();

    //~Edge();
};



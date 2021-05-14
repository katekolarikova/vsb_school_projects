#pragma once
//
// Created by katerina on 26.04.21.
//

#ifndef ALGORITMY_PROJEKT_KOL0436_GRAPH_H
#define ALGORITMY_PROJEKT_KOL0436_GRAPH_H
#include "Vertice.h"
#include "Edge.h"
#include <iostream>
#include <vector>

using std::string;
using std::vector;


/// Class Graph represents a whole situation as a graph
///
/// Main task of this class is to represent all of the possible connections between numbers and also it has methods for processing them.
class Graph {
private:
    vector<Vertice*> vertices;
    int num_vertices;
    vector<Edge*> edges;
    int num_edges;
public:
    /// This constructor converts a given sequence of numbers into a graph.
    /// @param path A string represents a sequence of numbers
    Graph(const char* path);
    ~Graph();
    /// This method tests, if there is an existing connection between two vertices.
    /// @param vertice1 First vertice to test
    /// @param vertice2 Second vertice to test
    /// @return true for existing connection
    bool TestEdge(Vertice* vertice1, Vertice* vertice2);
  
    /// This method prints all vertices in graph.
    void PrintVertices();
 
    /// This method prints all edges in the graph.
    void PrintEdges();

    /// This method can go throught the graph. It sets a visit marks for a vertices connected by edge. It sets a mark to all unvisited vertices, which are connected with the actual vertice. 
    /// Then it checks next vertice in a queue ... the work stops whem the final vertice is found.
    void VisitVertices();

    /// This method checks visit marks and edges and then it finds a path from final vertice to the fisrt one.
    void FindPath();
};


#endif //ALGORITMY_PROJEKT_KOL0436_GRAPH_H

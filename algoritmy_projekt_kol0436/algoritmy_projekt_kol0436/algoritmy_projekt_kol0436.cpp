#include <iostream>
#include <cstring>
#include "Graph.h"
using std::string;
using std::cout;
using std::endl;

int main() {

    const char* str1 = "123415";
    Graph* graph1 = new Graph(str1);
    //graph->PrintVertices();
    //graph->PrintEdges();
    cout << str1 << endl;
    graph1->VisitVertices();
    graph1->FindPath();

    const char* str2 = "123451";
    Graph* graph2 = new Graph(str2);
    //graph->PrintVertices();
    //graph->PrintEdges();
    cout << str2 << endl;
    graph2->VisitVertices();
    graph2->FindPath();


    const char* str3 = "12345";
    Graph* graph3 = new Graph(str3);
    //graph->PrintVertices();
    //graph->PrintEdges();
    cout << str3 << endl;
    graph3->VisitVertices();
    graph3->FindPath();

    const char* str4 = "180557994366325331615166132279";
    Graph* graph4 = new Graph(str4);
    //graph->PrintVertices();
    //graph->PrintEdges();
    cout << str4 << endl;
    graph4->VisitVertices();
    graph4->FindPath();

    graph1->~Graph();
    graph2->~Graph();
    graph3->~Graph();
    graph4->~Graph();
    return 0;
}

#include <cstring>
#include "Graph.h"
#include <iostream>
#include <queue>
#include <stack>

using std::stack;
using std::queue;
using std::cout;

Graph::Graph(const char* path)
{
    this->num_vertices = 0;
    this->num_edges = 0;
    int str_len = strlen(path);
    for (int i = 0; i < str_len; ++i)
    {
        char verticle = path[i];
        Vertice* vec = new Vertice(verticle, i);
        this->vertices.push_back(vec);
        this->num_vertices++;
    }

    for (int i = 0; i < str_len - 1; ++i)
    {
        Vertice* vec1 = this->vertices[i];
        Vertice* vec2 = this->vertices[i + 1];
        Edge* ed = new Edge(vec1, vec2);
        this->edges.push_back(ed);
        this->num_edges++;
        for (int j = i + 2; j < str_len; ++j)
        {
            Vertice* vec3 = this->vertices[j];
            if (vec1->GetName() == vec3->GetName())
            {
                Edge* ed2 = new Edge(vec1, vec3);
                this->edges.push_back(ed2);
                this->num_edges++;
            }
        }
    }

}
Graph::~Graph()
{
    for (Vertice* vertice : vertices)
    {
        delete vertice;
    }

    for (Edge* edge : edges)
    {
        delete edge;
    }


}

void Graph::PrintVertices()
{
    for (int i = 0; i < this->num_vertices; ++i)
    {
        Vertice* vec = this->vertices[i];
        vec->PrintVertice();
    }
}

void Graph::PrintEdges()
{
    for (int i = 0; i < this->num_edges; ++i)
    {
        Edge* ed = this->edges[i];
        ed->PrintEdge();
    }
}
bool Graph::TestEdge(Vertice* vec1, Vertice* vec2)
{
    int test = false;
    for (int i = 0; i < this->edges.size(); ++i)
    {
        Vertice* vec_edg1 = this->edges[i]->GetVertice1();
        Vertice* vec_edg2 = this->edges[i]->GetVertice2();
        if (vec1 == vec_edg1 && vec2 == vec_edg2) { test = true; }
        if (vec1 == vec_edg2 && vec2 == vec_edg1) { test = true; }
    }
    return test;
}


void Graph::VisitVertices()
{
    Vertice* startVec = this->vertices[0];
    Vertice* endVec = this->vertices[this->num_vertices - 1];
    queue<Vertice*> queue;
    int mark = 1;
    bool end = false;

    queue.push(startVec);
    startVec->SetVisit(0);
    while (!queue.empty() && !end)
    {
        Vertice* vec1 = queue.front();
        for (int i = 0; i < this->num_vertices; ++i)
        {
            Vertice* vec2 = this->vertices[i];

            if (this->TestEdge(vec1, vec2) && vec2->GetVisit() < 0)
            {
                queue.push(vec2);
                vec2->SetVisit(vec1->GetVisit() + 1);
                if (vec2 == endVec)
                {
                    end = true;
                    break;
                }
            }
        }
        queue.pop();

    }

}

void Graph::FindPath()
{
    Vertice* endVec = this->vertices.back();
    int mark = endVec->GetVisit();
    stack<Vertice*> stack;

    stack.push(endVec);
    while (mark != 0)
    {
        for (int i = 0; i < this->vertices.size(); ++i)
        {
            Vertice* vec = vertices[i];
            if (this->TestEdge(endVec, vec) && vec->GetVisit() == mark - 1)
            {
                stack.push(vec);
                endVec = vec;
                mark--;
                break;

            }
        }
    }
    cout << "kangaroo made " << stack.size()-1 << " jumps: ";
    while (!stack.empty())
    {
        Vertice* verticePrint = stack.top();
        cout << verticePrint->GetPosition() << " ";
        stack.pop();

    }
    cout << "\n";
}

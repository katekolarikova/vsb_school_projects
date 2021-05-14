#pragma once
#include <iostream>
using std::string;

/// Class Vertice represents one single vertice.
///
/// Vertice represents one number in the sequence.
class Vertice
{
private:
    char name;
    int visit;
    int position;
public:

    /// Constructor, which creates a vertice.
    /// @param name number in the sequence
    /// @param position position of the number in the sequence
    Vertice(char name, int position);
    /// This method prints name of the vertice.
    void PrintVertice();
    /// This method returns name of the vertice.
    /// @return name name of the vertice, which represents a number in a sequence
    char GetName();
    /// This method returns a visit mark of the vertice
    /// @return visit mark of visit
    int GetVisit();
    /// This method sets a visit mark. 
    /// @param i visit mark
    void SetVisit(int i);
    /// This method returns a position of a number in a sequence
     /// @return position position of the number in the sequence
    int GetPosition();
 

};
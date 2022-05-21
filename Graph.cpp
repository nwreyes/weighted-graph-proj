#include "Graph.h"
#include <vector>

Graph::Graph()
{
    /*
    Graph constructor
        - Will have to include edges or some representation of them at some point
    */
    nodes = {};
};

Graph::Graph(Node first)
{
    /*
    Graph Constructor
        - allows the user to make a node beginning with a particular node/vertex
    */
    nodes = {first};
};

bool Graph::addNode(Node vertex)
{
    nodes.push_back(vertex);
};

string toString()
{
    /*
    Returns the string representation of the vector containing nodes
        - Maybe will be able to show the actual graph through other means?
    */



};
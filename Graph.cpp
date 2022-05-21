#include "Graph.h"
#include <vector>
#include <iostream>

using std::cout;
using std::to_string;

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
    for (int i=0; i<nodes.size(); i++)
    {
        if (nodes.size() == 0)
        {
            break;

        } else if (nodes[i].getKey() == vertex.getKey())
        {
            cout << "\nduplicate node detected - node not added\n";
            return false;
        }
    }
    nodes.push_back(vertex);
    return true;
};

string Graph::toString()
{
    /*
    Returns the string representation of the vector containing nodes
        - Maybe will be able to show the actual graph through other means?
    */

   if (nodes.size() == 0)
   {
       return "{}";
   };

    string graphStr = "{";

    for (int i=0; i<nodes.size(); i++)
    {
        // conditional to avoid unsightly commas
        if (i != nodes.size()-1)
        {
            string tmp = to_string(nodes[i].getKey());
            graphStr += tmp + ", ";
        } else 
        {
            string tmp = to_string(nodes[i].getKey());
            graphStr += tmp + "}";
        }
    }

    return graphStr;
};
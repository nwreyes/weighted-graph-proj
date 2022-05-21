#include <vector>
#include "Node.h"
#include <string>

using std::vector;

class Graph
{
    private:
        vector<Node> nodes;

    public:
        Graph();
        Graph(Node first);
        bool addNode(Node vertex);
        // bool hasPath(Node* src, Node* dest);
        // double getMinimum(Node* src, Node* dest);
        // vector<Node*> getPath(Node* src, Node* dest);
        string toString();
        
};
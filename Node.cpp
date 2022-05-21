#include "Node.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::cout;
using std::stringstream;
using std::to_string;


Node::Node(int key)
{
    /*
    Node Constructor
    args: int key - an integer value representing the key of a node
    */
    keyValue = key;
    weight = 0.0;
    paths = {};
};

Node::Node(int key, double argWeight)
{
    /*
    Node constructor with additional arg
    double argWeight - allows for the user to specify the weight of a node
    */
    keyValue = key;
    weight = argWeight;
    paths = {};
};

int Node::getKey()
{
    /*
    Getter method for the key of a node
    returns the integer key value
    */
    return keyValue;
};

double Node::getWeight()
{
    /*
    Getter method for the weight
    args: N/A
    returns a double value for the weight
    */
    return weight;
};

vector<Node*> Node::getPaths() 
{
    /*
    Getter method for the paths vector
    returns vector with node pointers to represent the paths
    */
   return paths;
}

void Node::setWeight(double lb)
{
    /*
    Setter method for manually setting the weight of a node
    arg: double lb - desired weight for node
    */
    weight = lb;
};

void Node::addPath(Node* dest)
{
    /*
    Pushes a pointer to a node in the paths vector; 
        acts as a direction for each edge;
        won't add any pointers to "this" node
    arg: dest - pointer to a node
    */

    if ((*dest).getKey() != keyValue)
    {
        paths.push_back(dest);

    } else
    {
        cout << "failed to add path - duplicate to root";
    }

};

string Node::toString()
{
    /*
    returns a string so that a node can be visibly printed
    */

    // adding key and weight to the string
    string nodeStr = "(";
    nodeStr += to_string(keyValue);
    nodeStr += ", ";
    nodeStr += to_string(weight);
    nodeStr += "), {";

    // using a loop to append the contents of the vector
    for (int i=0; i<paths.size(); i++)
    {
        // conditional to avoid unsightly commas
        if (i != paths.size()-1)
        {
            string tmp = to_string((*(paths[i])).getKey());
            nodeStr += tmp + ", ";
        } else 
        {
            string tmp = to_string((*(paths[i])).getKey());
            nodeStr += tmp + "}";
        }
    }

    return nodeStr; // form: (key, weight), paths
};
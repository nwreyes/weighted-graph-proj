#include <vector>
#include <string>

using std::vector;
using std::string;

class Node
{
    private:
        int keyValue;
        // - key value for each node; data it is holding, or its "name"
        double weight;
        // - How much it costs to travel to this node
        vector<Node*> paths;
        // - which other nodes this one directs to

        // Maybe add a "data" variable with a string that'll contain a name or something

    public:
        Node(int key);
        Node(int key, double lb);
        // - Node constructors
        int getKey();
        // - returns key value
        double getWeight();
        // - returns weight
        vector<Node*> getPaths();
        // - returns paths vector
        void setWeight(double lb);
        // - changes weight of the node
        void addPath(Node* dest);
        // - adds node pointers to the paths vector
        string toString();
        // - prints out the node in a readable sense
        bool equals();
        // - checks if one node is equal to another
};
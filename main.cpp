#include "Node.cpp"
#include <iostream>

using std::cout;

int main() {
    cout << "======= Testing Node class ========\n";

    cout << "\n=== Testing getters and setters ===\n";

    // testing 
    Node jode = Node(7);
    cout << "jode key: " << jode.getKey() << '\n';
    cout << "jode weight: " << jode.getWeight() << '\n';
    jode.setWeight(3.0);
    cout << "jode changed weight: " << jode.getWeight() << '\n';
    cout << "jode: " << jode.toString() << '\n';

    Node frode = Node(5);
    frode.setWeight(4.5);
    cout << "frode key: " << frode.getKey() << '\n';
    cout << "frode weight: " << frode.getWeight() << '\n';
    cout << "frode: " << frode.toString() << '\n';

    Node snode = Node(8, 2.5);
    cout << "snode key: " << snode.getKey() << '\n';
    cout << "snode weight: " << snode.getWeight() << '\n';
    cout << "snode: " << snode.toString() << '\n';

    Node timPeck = Node(10, 100); // cuz he's a 10/10 and keeps it '100'
    cout << "tim peck key: " << timPeck.getKey() << '\n';
    cout << "tim peck weight: " << timPeck.getWeight() << '\n';
    cout << "tim peck: " << timPeck .toString() << '\n';

    cout <<  "\n====== Testing path vectors =======\n";

    Node* jodePtr = &jode;
    Node* frodePtr = &frode;
    Node* snodePtr = &snode;
    Node* peckPtr = &timPeck;

    // jode's paths
    jode.addPath(frodePtr);
    jode.addPath(snodePtr);
    jode.addPath(peckPtr);

    // frode's paths
    frode.addPath(jodePtr);

    // snode's paths
    snode.addPath(peckPtr);

    // tim's paths
    timPeck.addPath(jodePtr);
    timPeck.addPath(frodePtr);

    cout << "jode: " << jode.toString() << '\n';
    cout << "frode: " << frode.toString() << '\n';
    cout << "snode: " << snode.toString() << '\n';
    cout << "tim peck: " << timPeck .toString() << '\n';    


    cout << "\n===================================\n";

    
    return 0;
};
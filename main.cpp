#include <iostream>
#include "GOAT.h"
#include "DoublyLinkedList.h"

using namespace std;

int main() {
    DoublyLinkedList goatList;

    
    goatList.push_back(Goat("Pepper", "White", 15));
    goatList.push_back(Goat("Teddy", "Purple", 20));
    goatList.push_back(Goat("Socks", "Purple", 8));
    goatList.push_back(Goat("Pepper", "Blue", 1));
    goatList.push_back(Goat("Bella", "Pink", 10));
    goatList.push_back(Goat("Zoe", "Black", 11));
    goatList.push_back(Goat("Daisy", "Pink", 17));
    goatList.push_back(Goat("Luna", "Yellow", 13));
    goatList.push_back(Goat("Socks", "White", 14));
    goatList.push_back(Goat("Ginger", "Brown", 13));
    goatList.push_back(Goat("Socks", "Tan", 9));
    goatList.push_back(Goat("Bella", "Blue", 1));
    goatList.push_back(Goat("Ginger", "Golden", 6));

    cout << "Forward: " << endl;
    goatList.printForward();

    cout << "Backward: " << endl;
    goatList.printBackward();

    return 0;
}

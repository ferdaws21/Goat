#include <iostream>
#include "GOAT.h"
#include "DoublyLinkedList.h"

using namespace std;

int main() {
    DoublyLinkedList goatList;

    // Manually create Goat objects with the exact attributes
    goatList.push_back(Goat("Senior", "Yellow", 6));
    goatList.push_back(Goat("Godlike", "Red", 7));
    goatList.push_back(Goat("Old", "Red", 2));
    goatList.push_back(Goat("Old", "Gold", 6));
    goatList.push_back(Goat("Mature", "Mauve", 6));
    goatList.push_back(Goat("Teen", "Gold", 10));
    goatList.push_back(Goat("Teen", "White", 17));

    cout << "Forward: " << endl;
    goatList.printForward();

    cout << "Backward: " << endl;
    goatList.printBackward();

    return 0;
}

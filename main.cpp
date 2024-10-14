#include <iostream>
#include "DoublyLinkedList.h"
#include "GOAT.h"

int main() {
    DoublyLinkedList goatList;

    // Adding goats to the list
    goatList.push_back(Goat()); // Adding a random goat
    goatList.push_back(Goat()); // Adding another random goat
    goatList.push_back(Goat()); // Adding yet another random goat

    // Testing forward traversal
    std::cout << "Forward Traversal:" << std::endl;
    goatList.printForward();

    // Testing backward traversal
    std::cout << "Backward Traversal:" << std::endl;
    goatList.printBackward();

    return 0;
}

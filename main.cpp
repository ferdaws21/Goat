#include <iostream>
#include <cstdlib>
#include <ctime>
#include "DoublyLinkedList.h"

int main() {
    srand(time(0)); // Seed for random number generation

    DoublyLinkedList goatList;

    int numGoats = rand() % 16 + 5; // Random number between 5 and 20
    for (int i = 0; i < numGoats; ++i) {
        Goat goat; // Create a random Goat
        goatList.push_back(goat); // Add the Goat to the list
    }

    std::cout << "Forward Traversal:" << std::endl;
    goatList.printForward();
    
    std::cout << "Backward Traversal:" << std::endl;
    goatList.printBackward();

    return 0;
}

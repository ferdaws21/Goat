#include <iostream>
#include <cstdlib>
#include <ctime>
#include "DoublyLinkedList.h"

int main() {
    srand(time(0)); // Seed the random number generator

    DoublyLinkedList goatList;
    int numGoats = rand() % 16 + 5; // Random number of goats between 5 and 20

    // Append random Goat objects to the list
    for (int i = 0; i < numGoats; ++i) {
        goatList.push_back(Goat()); // Using default constructor
    }

    // Print the list forward and backward
    std::cout << "Forward: " << std::endl;
    goatList.printForward();

    std::cout << "Backward: " << std::endl;
    goatList.printBackward();

    return 0;
}

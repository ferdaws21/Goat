#include <iostream>
#include <cstdlib>
#include <ctime>
#include "DoublyLinkedList.h"

int main() {
    srand(time(0)); // Seed the random number generator

    DoublyLinkedList goatList;

    // Create a random number of Goat objects (5 to 20)
    int numberOfGoats = rand() % 16 + 5; // 5 to 20
    for (int i = 0; i < numberOfGoats; ++i) {
        Goat g; // Create a random Goat
        goatList.push_back(g); // Add to the list
    }

    std::cout << "Forward traversal:\n";
    goatList.print_forward();

    std::cout << "\nBackward traversal:\n";
    goatList.print_backward();

    return 0;
}

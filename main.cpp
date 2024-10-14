#include <iostream>
#include "GOAT.h"             // Include your Goat class header
#include "DoublyLinkedList.h"  // Include your DoublyLinkedList class header
#include <cstdlib>             // For srand() and rand()
#include <ctime>               // For time()

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator

    DoublyLinkedList goatList; // Create a DoublyLinkedList of Goat objects
    int numGoats = rand() % 16 + 5; // Random number of goats between 5 and 20

    for (int i = 0; i < numGoats; ++i) {
        Goat goat; // Create a random Goat
        goatList.push_back(goat); // Add the Goat to the list
    }

    cout << "Forward: " << endl;
    goatList.printForward(); // Print the list forward

    cout << "Backward: " << endl;
    goatList.printBackward(); // Print the list backward

    return 0;
}

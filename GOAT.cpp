#include "GOAT.h"

// Define static members
const array<string, 15> Goat::names = {"Billy", "Nanny", "Daisy", "Ginger", "Luna", "Marley", "Oscar", "Pepper", "Rocky", "Socks", "Teddy", "Willow", "Zoe", "Coco", "Bella"};
const array<string, 15> Goat::colors = {"White", "Black", "Brown", "Spotted", "Gray", "Golden", "Red", "Yellow", "Cream", "Tan", "Mauve", "Blue", "Green", "Purple", "Pink"};

Goat::Goat() : name("Unknown"), color("Unknown"), age(0) {} // Default constructor

void Goat::print() const {
    cout << name << " (" << color << ", " << age << ")" << endl;
}

// Function to generate a random goat (example implementation)
Goat Goat::generateRandomGoat() {
    // Implement random selection logic here
    return Goat(names[0], colors[0], 1); // Placeholder
}

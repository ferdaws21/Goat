#include "GOAT.h"
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

// Define static data members
const string Goat::names[15] = {"Billy", "Nanny", "Daisy", "Ginger", "Luna", "Marley", "Oscar", "Pepper", "Rocky", "Socks", "Teddy", "Willow", "Zoe", "Coco", "Bella"};
const string Goat::colors[15] = {"White", "Black", "Brown", "Spotted", "Gray", "Golden", "Red", "Yellow", "Cream", "Tan", "Mauve", "Blue", "Green", "Purple", "Pink"};

// Default constructor
Goat::Goat() {
    srand(time(0));  // Seed the random number generator
    age = rand() % 20 + 1;  // Random age between 1 and 20
    name = names[rand() % 15];  // Random name from names array
    color = colors[rand() % 15];  // Random color from colors array
}

// Parameterized constructor
Goat::Goat(string n, string c, int a) : name(n), color(c), age(a) {}

// Method definitions
int Goat::getAge() const { return age; }
string Goat::getName() const { return name; }
string Goat::getColor() const { return color; }

void Goat::print() const {
    cout << name << " (" << color << ", " << age << ")" << endl;
}

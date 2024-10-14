#include "GOAT.h"

// Define static data members
const string Goat::names[15] = {"Billy", "Nanny", "Daisy", "Ginger", "Luna", "Marley", "Oscar", "Pepper", "Rocky", "Socks", "Teddy", "Willow", "Zoe", "Coco", "Bella"};
const string Goat::colors[15] = {"White", "Black", "Brown", "Spotted", "Gray", "Golden", "Red", "Yellow", "Cream", "Tan", "Mauve", "Blue", "Green", "Purple", "Pink"};

// Default constructor
Goat::Goat() : age(0), name("Unknown"), color("Unknown") {}

// Method definitions
int Goat::getAge() const { return age; }
string Goat::getName() const { return name; }
string Goat::getColor() const { return color; }

void Goat::print() const {
    cout << name << " (" << color << ", " << age << ")" << endl;
}

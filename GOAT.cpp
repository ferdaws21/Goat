#include "FerdawsAlamyar_Goat.h"
#include <ctime>

const std::string Goat::names[15] = {"Billy", "Nanny", "Daisy", "Ginger", "Luna", "Marley", "Oscar", "Pepper", "Rocky", "Socks", "Teddy", "Willow", "Zoe", "Coco", "Bella"};
const std::string Goat::colors[15] = {"White", "Black", "Brown", "Spotted", "Gray", "Golden", "Red", "Yellow", "Cream", "Tan", "Mauve", "Blue", "Green", "Purple", "Pink"};

// Default constructor
Goat::Goat() {
    age = rand() % 20 + 1; // Random age between 1 and 20
    name = names[rand() % 15]; // Randomly select a name
    color = colors[rand() % 15]; // Randomly select a color
}

// Parameter constructor
Goat::Goat(int a, std::string n, std::string c) : age(a), name(n), color(c) {}

// Getters
int Goat::getAge() const { return age; }
std::string Goat::getName() const { return name; }
std::string Goat::getColor() const { return color; }

// Print method
void Goat::print() const {
    std::cout << name << " (" << color << ", " << age << ")" << std::endl;
}

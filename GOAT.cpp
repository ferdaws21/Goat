#include "GOAT.h"
#include <cstdlib>

const std::string Goat::names[15] = {"Billy", "Nanny", "Daisy", "Buttercup", "Clover", 
                                       "Minnie", "Poppy", "Mochi", "Cinnamon", "Peanut", 
                                       "Willow", "Luna", "Zoe", "Bambi", "Snowball"};

const std::string Goat::colors[15] = {"White", "Brown", "Black", "Spotted", "Gray", 
                                        "Cream", "Golden", "Chestnut", "Sandy", "Mottled", 
                                        "Tawny", "Piebald", "Almond", "Copper", "Ivory"};

Goat::Goat() {
    age = rand() % 20 + 1; // Random age between 1 and 20
    name = names[rand() % 15]; // Randomly select a name
    color = colors[rand() % 15]; // Randomly select a color
}

Goat::Goat(int a, std::string n, std::string c) : age(a), name(n), color(c) {}

void Goat::display() const {
    std::cout << "Goat(Name: " << name << ", Age: " << age << ", Color: " << color << ")\n";
}

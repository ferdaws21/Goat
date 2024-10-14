#include "GOAT.h"
#include <ctime>

const std::string Goat::names[15] = {"Billy", "Nanny", "Daisy", "Ginger", "Luna", "Marley", "Oscar", "Pepper", "Rocky", "Socks", "Teddy", "Willow", "Zoe", "Coco", "Bella"};
const std::string Goat::colors[15] = {"White", "Black", "Brown", "Spotted", "Gray", "Golden", "Red", "Yellow", "Cream", "Tan", "Mauve", "Blue", "Green", "Purple", "Pink"};


Goat::Goat() {
    age = rand() % 20 + 1;
    name = names[rand() % 15]; 
    color = colors[rand() % 15]; 
}


Goat::Goat(int a, std::string n, std::string c) : age(a), name(n), color(c) {}


int Goat::getAge() const { return age; }
std::string Goat::getName() const { return name; }
std::string Goat::getColor() const { return color; }


void Goat::print() const {
    std::cout << name << " (" << color << ", " << age << ")" << std::endl;
}

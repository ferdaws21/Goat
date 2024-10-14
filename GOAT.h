#ifndef GOAT_H
#define GOAT_H

#include <string>
using namespace std;

class Goat {
private:
    int age;
    string name;
    string color;

public:
    // Parameterized constructor
    Goat(string n, string c, int a) : name(n), color(c), age(a) {}

    // Optional: Add getters for the private variables if needed
    string getName() const { return name; }
    string getColor() const { return color; }
    int getAge() const { return age; }
};

#endif

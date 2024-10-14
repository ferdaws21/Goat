#ifndef GOAT_H
#define GOAT_H

#include <iostream>
#include <string>
#include <array>

using namespace std;

class Goat {
private:
    static const array<string, 15> names;
    static const array<string, 15> colors;
    string name;
    string color;
    int age;

public:
    Goat(string n, string c, int a) : name(n), color(c), age(a) {} // Constructor
    Goat(); // Default constructor

    int getAge() const { return age; }
    string getName() const { return name; }
    string getColor() const { return color; }
    void print() const;

    // Additional function to generate random goat
    static Goat generateRandomGoat();
};

#endif // GOAT_H

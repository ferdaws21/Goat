#ifndef GOAT_H
#define GOAT_H

#include <string>

class GOAT {
private:
    int age;
    std::string name;
    std::string color;

public:
    static const std::string names[15];
    static const std::string colors[15];

    Goat(); // Default constructor
    Goat(int a, std::string n, std::string c); // Parameter constructor

    void display() const; // Method to display goat info
};

#endif // GOAT_H

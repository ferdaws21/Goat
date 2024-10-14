#ifndef GOAT_H
#define GOAT_H

#include <string>
#include <cstdlib>

class Goat {
private:
    int age;
    std::string name;
    std::string color;

    // Declare static members
    static const std::string names[15];
    static const std::string colors[15];

public:
    Goat(); // Default constructor
    Goat(int a, std::string n, std::string c); // Parameterized constructor

    int getAge() const;
    std::string getName() const;
    std::string getColor() const;
    void print() const;
};

#endif // GOAT_H

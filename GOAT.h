#ifndef GOAT_H
#define GOAT_H

#include <iostream>
#include <string>
#include <cstdlib>

class GOAT {
private:
    int age;
    std::string name;
    std::string color;
    
    static const std::string names[15]; // Declare name array
    static const std::string colors[15]; // Declare color array

public:
    // Default constructor
    Goat();
    // Parameter constructor
    Goat(int a, std::string n, std::string c);

    // Getters for printing
    int getAge() const;
    std::string getName() const;
    std::string getColor() const;

    // Print method for Goat
    void print() const;
};

#endif // GOAT_H

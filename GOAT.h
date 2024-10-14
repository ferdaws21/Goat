#ifndef GOAT_H
#define GOAT_H

#include <string>
#include <iostream>
#include <cstdlib> // for rand()

class Goat {
private:
    int age;
    std::string name;
    std::string color;

    static const std::string names[15];
    static const std::string colors[15];

public:
    Goat();
    Goat(int a, std::string n, std::string c);

    int getAge() const;
    std::string getName() const;
    std::string getColor() const;
    void print() const;
};

#endif // GOAT_H

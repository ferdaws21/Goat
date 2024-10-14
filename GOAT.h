#ifndef GOAT_H
#define GOAT_H

#include <iostream>
#include <string>

using namespace std;

class GOAT {
private:
    int age;
    string name;
    string color;

    // Declare static data members
    static const string names[15];
    static const string colors[15];

public:
    // Constructors
    Goat(string n, string c, int a) : name(n), color(c), age(a) {}
    
    // Declare default constructor
    Goat();

    // Method declarations
    int getAge() const;
    string getName() const;
    string getColor() const;
    void print() const;
};

#endif // GOAT_H

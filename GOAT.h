#ifndef GOAT_H
#define GOAT_H

#include <string>
using namespace std;

class GOAT {
private:
    int age;
    string name;
    string color;

public:
    Goat(string n, string c, int a); // Parameterized constructor
    string getColor() const;          // Ensure this is declared
    void print() const;                // Ensure this is declared
};

#endif // GOAT_H

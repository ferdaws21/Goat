#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "GOAT.h"

class DoublyLinkedList {
private:
    struct Node {
        Goat data;
        Node* next;
        Node* prev;
        Node(Goat d) : data(d), next(nullptr), prev(nullptr) {}
    };
    
    Node* head;
    Node* tail;

public:
    DoublyLinkedList(); // Constructor
    void push_front(Goat g); // Push front with Goat
    void push_back(Goat g); // Push back with Goat
    void print_forward() const; // Print forward
    void print_backward() const; // Print backward
    ~DoublyLinkedList(); // Destructor
};

#endif // DOUBLYLINKEDLIST_H

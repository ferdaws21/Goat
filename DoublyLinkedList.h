#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "GOAT.h"

class Node {
public:
    Goat data; // Store Goat object instead of int
    Node* next;
    Node* prev;

    Node(Goat d) : data(d), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
    ~DoublyLinkedList(); // Destructor
    void push_back(Goat goat); // Push back method
    void printForward() const;
    void printBackward() const;
};

#endif // DOUBLYLINKEDLIST_H

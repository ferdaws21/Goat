#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "GOAT.h"

class DoublyLinkedList {
private:
    struct Node {
        Goat data; // Node data type changed to Goat
        Node* next;
        Node* prev;

        Node(Goat d);
    };

    Node* head;
    Node* tail;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void push_front(Goat goat); // Ensure function names match
    void push_back(Goat goat);  // Ensure function names match
    void printForward() const;  // Ensure function names match
    void printBackward() const;  // Ensure function names match
};

#endif // DOUBLYLINKEDLIST_H

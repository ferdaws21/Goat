#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "GOAT.h"

class Node {
public:
    Goat data; // Change from int to Goat
    Node* next;
    Node* prev;

    Node(Goat d);
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList();
    void push_front(Goat goat);
    void push_back(Goat goat);
    void printForward() const;
    void printBackward() const;
};

#endif // DOUBLY_LINKED_LIST_H

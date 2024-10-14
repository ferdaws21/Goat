#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "GOAT.h"

class DoublyLinkedList {
private:
    struct Node {
        Goat data;
        Node* next;
        Node* prev;

        Node(Goat d);
    };

    Node* head;
    Node* tail;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void push_front(Goat goat);
    void push_back(Goat goat);
    void printForward() const;
    void printBackward() const;
};

#endif // DOUBLYLINKEDLIST_H

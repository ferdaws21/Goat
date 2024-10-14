#include "DoublyLinkedList.h"
#include <iostream>

Node::Node(Goat d) : data(d), next(nullptr), prev(nullptr) {}

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

void DoublyLinkedList::push_front(Goat goat) {
    Node* newNode = new Node(goat);
    if (!head) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void DoublyLinkedList::push_back(Goat goat) {
    Node* newNode = new Node(goat);
    if (!tail) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DoublyLinkedList::printForward() const {
    if (!head) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    Node* current = head;
    while (current) {
        current->data.print();
        current = current->next;
    }
}

void DoublyLinkedList::printBackward() const {
    if (!tail) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    Node* current = tail;
    while (current) {
        current->data.print();
        current = current->prev;
    }
}

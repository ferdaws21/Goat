#include "DoublyLinkedList.h"
#include <iostream>

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

DoublyLinkedList::~DoublyLinkedList() {
    // Destructor implementation
}

void DoublyLinkedList::push_front(Goat goat) {
    // Implementation
}

void DoublyLinkedList::push_back(Goat goat) {
    // Implementation
}

void DoublyLinkedList::printForward() const { // Ensure function names match
    if (!head) {
        std::cout << "List is empty." << std::endl;
        return;
    }
    Node* current = head;
    while (current) {
        current->data.print();
        current = current->next;
    }
}

void DoublyLinkedList::printBackward() const { // Ensure function names match
    if (!tail) {
        std::cout << "List is empty." << std::endl;
        return;
    }
    Node* current = tail;
    while (current) {
        current->data.print();
        current = current->prev;
    }
}

#include "DoublyLinkedList.h"
#include <iostream>

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

void DoublyLinkedList::push_front(Goat g) {
    Node* newNode = new Node(g);
    if (!head) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void DoublyLinkedList::push_back(Goat g) {
    Node* newNode = new Node(g);
    if (!tail) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DoublyLinkedList::print_forward() const {
    if (!head) {
        std::cout << "List is empty\n";
        return;
    }
    Node* current = head;
    while (current) {
        current->data.display();
        current = current->next;
    }
}

void DoublyLinkedList::print_backward() const {
    if (!tail) {
        std::cout << "List is empty\n";
        return;
    }
    Node* current = tail;
    while (current) {
        current->data.display();
        current = current->prev;
    }
}

DoublyLinkedList::~DoublyLinkedList() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

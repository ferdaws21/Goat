#include "DoublyLinkedList.h"
#include <iostream>

DoublyLinkedList::~DoublyLinkedList() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void DoublyLinkedList::push_back(Goat goat) {
    Node* newNode = new Node(goat);
    if (!head) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DoublyLinkedList::printForward() const {
    Node* current = head;
    if (!current) {
        std::cout << "List is empty." << std::endl;
        return;
    }
    while (current) {
        current->data.print();
        current = current->next;
    }
}

void DoublyLinkedList::printBackward() const {
    Node* current = tail;
    if (!current) {
        std::cout << "List is empty." << std::endl;
        return;
    }
    while (current) {
        current->data.print();
        current = current->prev;
    }
}

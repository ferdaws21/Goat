void DoublyLinkedList::printForward() const {
    if (head == nullptr) {
        std::cout << "List is empty" << std::endl;
        return;
    }

    Node* current = head;
    std::cout << "Forward: " << std::endl;
    while (current != nullptr) {
        std::cout << "    " << current->data.toString() << std::endl;
        current = current->next;
    }
}

void DoublyLinkedList::printBackward() const {
    if (tail == nullptr) {
        std::cout << "List is empty" << std::endl;
        return;
    }

    Node* current = tail;
    std::cout << "Backward: " << std::endl;
    while (current != nullptr) {
        std::cout << "    " << current->data.toString() << std::endl;
        current = current->prev;
    }
}

//Write a C++ code that take linked list from user input and a value integer .
//Delete the value from the linkedlist.
//Sample Input :- 10->20->30->40 value = 20
//Sample Output :- 10->30->40

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void append(Node** head, int newData) {
    Node* newNode = new Node();
    Node* last = *head;
    newNode->data = newData;
    newNode->next = nullptr;
    if (*head == nullptr) {
        *head = newNode;
        return;
    }
    while (last->next != nullptr)
        last = last->next;
    last->next = newNode;
}

void deleteValue(Node** head, int value) {
    Node* temp = *head;
    Node* prev = nullptr;
    if (temp != nullptr && temp->data == value) {
        *head = temp->next;
        delete temp;
        return;
    }
    while (temp != nullptr && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == nullptr)
        return;
    prev->next = temp->next;
    delete temp;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data;
        if (node->next != nullptr)
            cout << "->";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    int value = 20;
    deleteValue(&head, value);

    printList(head);

    return 0;
}

//Write a C++ code that take linked list from user input that is in sorted order and a value integer.
//Now insert the value inside linkedlist such that new likedlist is also in sorted order.
//Sample Input:- 10->20->30->40 value =25
//Sample Output:- 10->20->25->30->40

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void append(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    if (*head == nullptr) {
        *head = newNode;
        return;
    }
    Node* last = *head;
    while (last->next != nullptr)
        last = last->next;
    last->next = newNode;
}

void insertSorted(Node** head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (*head == nullptr || (*head)->data >= value) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != nullptr && current->next->data < value) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
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
    int value;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    cout << "Enter the value to insert: ";
    cin >> value;

    insertSorted(&head, value);

    printList(head);

    return 0;
}

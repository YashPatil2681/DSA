#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Function to push a new node at the end of the list
    void push(int new_data) {
        Node* new_node = new Node(new_data);
        if (head == nullptr) {
            head = new_node;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    // Function to move the last element two positions to the front
    void moveLastToFrontByTwo() {
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
            // If the list is empty or has less than 3 elements, no changes needed
            return;
        }

        Node* second_last = nullptr;
        Node* last = head;

        // Traverse to find the second-last and last node
        while (last->next != nullptr) {
            second_last = last;
            last = last->next;
        }

        // Disconnect the last node from the list
        second_last->next = nullptr;

        // Move the last node two positions to the front
        last->next = head->next->next;  // Skip two nodes
        head->next->next = last;        // Insert the last node after the second node
    }

    // Function to print the linked list
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    // Adding nodes to the linked list
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.push(5);

    cout << "Original List: \n";
    list.printList();

    list.moveLastToFrontByTwo();

    cout << "\nModified List: \n";
    list.printList();

    return 0;
}

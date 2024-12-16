#include <iostream>
using namespace std;

// Forward declaration of the polynomial class
class polynomial;

// Class to represent a node in the linked list
class Node {
    int coeff; // Coefficient of the term
    int pow;   // Power of the term
public:
    Node* next; // Pointer to the next node
    Node(); // Constructor
    void read(); //  read coefficient and power
    void print(); //  print the term
    friend void addPolynomial(polynomial, polynomial); // Friend function for polynomial addition
};

// Constructor initializes the next pointer to nullptr
Node::Node() {
    next = nullptr;
}

// Method to read the coefficient and power of a term
void Node::read() {
    cout << "\nEnter coefficient: ";
    cin >> coeff;
    cout << "Enter power: ";
    cin >> pow;
}

// Method to print the term in polynomial format
void Node::print() {
    cout << coeff << "x^" << pow;
    if (next != nullptr) {
        cout << " + "; // Add a plus sign if there is another term
    }
}

// Class to represent a polynomial
class polynomial {
    Node* head; // Pointer to the head of the polynomial linked list
public:
    polynomial(); // Constructor
    void insertNode(); //  insert a node
    void PrintNode(); //  print the polynomial
    friend void addPolynomial(polynomial, polynomial); // Friend function for polynomial addition
};

// Constructor initializes head to nullptr
polynomial::polynomial() {
    head = nullptr;
}

// insert a new term into the polynomial
void polynomial::insertNode() {
    Node* newNode = new Node; // Create a new node
    newNode->read(); // Read coefficient and power
    if (head == nullptr) { // If the list is empty
        head = newNode; // Set head to the new node
    } else { // If the list is not empty
        Node* temp = head;
        while (temp->next != nullptr) { // Traverse to the end of the list
            temp = temp->next;
        }
        temp->next = newNode; // Link the new node
    }
}

// print the polynomial
void polynomial::PrintNode() {
    Node* temp = head;
    while (temp != nullptr) { // Traverse the linked list
        temp->print(); // Print each term
        temp = temp->next; // Move to the next term
    }
    cout << endl; 
}

// add two polynomials
void addPolynomial(polynomial p1, polynomial p2) {
    Node* cn1 = p1.head; // Pointer to traverse the first polynomial
    Node* cn2 = p2.head; // Pointer to traverse the second polynomial
    polynomial p3; // Resultant polynomial

    // Loop through both polynomials
    while (cn1 != nullptr && cn2 != nullptr) {
        Node* newNode = new Node; // Create a new node for the result
        if (cn1->pow > cn2->pow) { // If the power of the first polynomial is greater
            newNode->pow = cn1->pow;
            newNode->coeff = cn1->coeff;
            cn1 = cn1->next; // Move to the next term in p1
        } else if (cn1->pow < cn2->pow) { // If the power of the second polynomial is greater
            newNode->pow = cn2->pow;
            newNode->coeff = cn2->coeff;
            cn2 = cn2->next; // Move to the next term in p2
        } else { // If powers are equal
            newNode->pow = cn1->pow;
            newNode->coeff = cn1->coeff + cn2->coeff; // Add coefficients
            cn1 = cn1->next; // Move to the next term in p1
            cn2 = cn2->next; // Move to the next term in p2
        }

        // Insert newNode into p3
        if (p3.head == nullptr) {
            p3.head = newNode; // Set head if p3 is empty
        } else {
            Node* temp = p3.head;
            while (temp->next != nullptr) {
                temp = temp->next; // Traverse to the end of p3
            }
            temp->next = newNode; // Link the new node to the end of p3
        }
    }

    // Add remaining terms from p1
    while (cn1 != nullptr) {
        Node* newNode = new Node;
        newNode->pow = cn1->pow;
        newNode->coeff = cn1->coeff;
        cn1 = cn1->next;

        // Insert newNode into p3
        if (p3.head == nullptr) {
            p3.head = newNode; // Set head if p3 is empty
        } else {
            Node* temp = p3.head;
            while (temp->next != nullptr) {
                temp = temp->next; // Traverse to the end of p3
            }
            temp->next = newNode; // Link the new node
        }
    }

    // Add remaining terms from p2
    while (cn2 != nullptr) {
        Node* newNode = new Node;
        newNode->pow = cn2->pow;
        newNode->coeff = cn2->coeff;
        cn2 = cn2->next;

        // Insert newNode into p3
        if (p3.head == nullptr) {
            p3.head = newNode; // Set head if p3 is empty
        } else {
            Node* temp = p3.head;
            while (temp->next != nullptr) {
                temp = temp->next; // Traverse to the end of p3
            }
            temp->next = newNode; // Link the new node
        }
    }

    // Print the resulting polynomial
    cout << "Resultant Polynomial: ";
    p3.PrintNode();
}

int main() {
    polynomial p1; // First polynomial
    polynomial p2; // Second polynomial
    int n;
    int ch;
    char Ch;

    do {
        cout << "\n1 - Insert terms in polynomial 1";
        cout << "\n2 - Insert terms in polynomial 2";
        cout << "\n3 - Print polynomial 1";
        cout << "\n4 - Print polynomial 2";
        cout << "\n5 - Add polynomials";
        cout << "\nEnter choice: ";
        cin >> ch;
        
        switch (ch) {
            case 1: {
                cout << "\nEnter number of terms in first polynomial: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    p1.insertNode(); // Insert terms into the first polynomial
                }
                break; // Break to avoid fall-through
            }
            case 2: {
                cout << "\nEnter number of terms in second polynomial: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    p2.insertNode(); // Insert terms into the second polynomial
                }
                break; // Break to avoid fall-through
            }
            case 3: {
                cout << "First Polynomial: ";
                p1.PrintNode(); // Print the first polynomial
                break; // Break to avoid fall-through
            }
            case 4: {
                cout << "Second Polynomial: ";
                p2.PrintNode(); // Print the second polynomial
                break; // Break to avoid fall-through
            }
            case 5: {
                // Add the two polynomials and print the result
                addPolynomial(p1, p2);
                break; // Break to avoid fall-through
            }
            default:
                cout << "\nEnter a correct choice.";
        }

        cout << "\nDo you want to continue (y/n)? ";
        cin >> Ch;
    } while (Ch == 'y');

    return 0; // Exit the program
}
#include<iostream>
using namespace std;

// Node class represents a route with source, destination, time, distance, and charges.
class Node{
    string source;
    string destination;
    float time;
    float distance;
    float charges;
    public:
    Node* next_add; // Pointer to the next node in the circular list.
    void show();    // Displays route details.
    Node(string, string, float, float, float);  // Constructor to initialize a route.
    string getString();  // Returns the destination of the route.
};

// Constructor to initialize Node (route) details.
Node::Node(string d, string s, float t, float di, float c){
    destination = d;
    source = s;
    time = t;
    distance = di;
    charges = c;
    next_add = NULL;  // Initially, next_add points to nothing.
}

// Returns the destination of the route.
string Node::getString(){
    return destination;
}

// Displays the route details.
void Node::show(){
    cout<<"\ndestination is :- "<<destination;
    cout<<"\nsource is :- "<<source;
    cout<<"\ndistance is :- "<<distance;
    cout<<"\ncharges are :- "<<charges;
    cout<<"\ntime is :- "<<time;
}

// Navigation class to manage the linked list of routes.
class Navigation{
    Node* head;  // Pointer to the head of the list.
    public:
    Navigation();  // Constructor to initialize the list.
    void addRoute(string, string, float, float, float);  // Adds a route to the list.
    void deleteRoute();  // Deletes a route by destination.
    void printRoute();  // Prints all routes.
};

// Constructor initializes head to NULL (empty list).
Navigation::Navigation(){
    head = NULL;
}

// Adds a new route to the circular linked list.
void Navigation::addRoute(string d, string s, float t, float di, float c){
    Node* newNode = new Node(d, s, t, di, c);  // Create new node.
    if (head == NULL) {
        head = newNode;  // If list is empty, new node becomes the head.
        newNode->next_add = head;  // Points to itself (circular structure).
        return;
    } else {
        Node* temp = head;
        // Traverse to the last node.
        while (temp->next_add != head) {
            temp = temp->next_add;
        }
        // Add the new node at the end and maintain circular structure.
        temp->next_add = newNode;
        newNode->next_add = head;
    }
}

// Deletes a route by its destination.
void Navigation::deleteRoute(){
    if (head == NULL) {
        cout<<"\nNo routes available to delete.";
        return;
    }
    string str;
    cout<<"\nEnter the destination of the route to delete: ";
    cin>>str;

    Node* prev = NULL;
    Node* curr = head;

    // If the route to delete is the head.
    if (head->getString() == str) {
        if (head == head->next_add) {  // Only one node in the list.
            delete head;
            head = NULL;
        } else {
            Node* temp = head;
            // Traverse to the last node.
            while (temp->next_add != head) {
                temp = temp->next_add;
            }
            // Remove head and update the last node's next pointer.
            Node* deleteNode = head;
            head = head->next_add;
            temp->next_add = head;
            delete deleteNode;
        }
    } else {
        // Traverse to find the node to delete.
        do {
            prev = curr;
            curr = curr->next_add;
            if (curr->getString() == str) {
                prev->next_add = curr->next_add;  // Skip over the node.
                delete curr;  // Delete the node.
                return;
            }
        } while (curr != head);
        cout << "\nRoute not found!";
    }
}

// Prints all the routes in the list.
void Navigation::printRoute(){
    if (head == NULL) {
        cout << "\nNo routes available.";
        return;
    }
    Node* temp = head;
    // Traverse and display each node until the list loops back to the head.
    do {
        temp->show();
        temp = temp->next_add;
    } while (temp != head);
    cout << endl;
}

int main(){
    Navigation N;
    string source;
    string destination;
    float time;
    float distance;
    float charges;

    int ch;
    char Ch;

    do{
        // Menu for user to choose options.
        cout<<"\n1. Add Route";
        cout<<"\n2. Print Routes";
        cout<<"\n3. Remove Route";
        cout<<"\nEnter choice: ";
        cin>>ch;

        switch(ch){
            case 1:{
                // Add a new route.
                cout<<"\nEnter source: ";
                cin>>source;
                cout<<"Enter destination: ";
                cin>>destination;
                cout<<"Enter time: ";
                cin>>time;
                cout<<"Enter distance: ";
                cin>>distance;
                cout<<"Enter charges: ";
                cin>>charges;
                N.addRoute(source, destination, time, distance, charges);
                break;
            }
            case 2:
                // Print all routes.
                N.printRoute();
                break;
            case 3:
                // Delete a route.
                N.deleteRoute();
                break;
            default:
                cout<<"\nInvalid choice!";
        }
        cout<<"\nDo you want to continue (y/n): ";
        cin>>Ch;
    } while(Ch == 'y');  // Continue until the user inputs 'n'.
    
    return 0;
}

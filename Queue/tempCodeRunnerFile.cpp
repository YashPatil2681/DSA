#include <iostream>
using namespace std;
#define MAX 100

class TicketBookingSystem {
private:
    string queue[MAX];          // Array to store customer names
    int front, rear;            // declare front and rear 

public:
    // Constructor 
    TicketBookingSystem() {
        front = rear = -1;
    }

    // queue is full or not 
    bool isFull() {
        return rear == MAX - 1;
    }

    // queue is empty or not 
    bool isEmpty() {
        return front == -1 || front > rear;
    }

    // add a customer to the queue (arrival)
    void arrival(string customer_name) {
        if (isFull()) {
            cout << "Queue is full. Cannot add more customers." << endl;
            return;
        }
        if (isEmpty()) { // Set front to 0 when adding the first element
            front = 0;
        }
        rear++;
        queue[rear] = customer_name;
        cout << customer_name << " has arrived at the ticketing system." << endl;
    }

    // serve the next customer (dequeue)
    void serve() {
        if (isEmpty()) {
            cout << "No customers in the queue to serve." << endl;
            return;
        }
        cout << "Serving customer: " << queue[front] << endl;
        front++; // Move the front pointer to the next customer

        // Reset front and rear if all customers are served
        if (front > rear) {
            front = rear = -1;
        }
    }

    // display all waiting customers
    void displayWaitingCustomers() {
        if (isEmpty()) {
            cout << "No customers waiting in the queue." << endl;
            return;
        }
        cout << "Waiting customers: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    TicketBookingSystem s;
    int choice;
    string name;

    do {
        cout << "\n1. Arrival of customer\n2. Serve customer\n3. Display all waiting customers\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter customer name: ";
                cin >> name;
                s.arrival(name);
                break;
            case 2:
                s.serve();
                break;
            case 3:
                s.displayWaitingCustomers();
                break;
            case 4:
                cout << "Exiting the system." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

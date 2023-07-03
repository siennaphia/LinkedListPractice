#include <iostream>
using namespace std;

// Defining the structure for a single linked list 
struct Node {
    int data; // Data stored in the node
    struct Node* next; // Pointer to the next node in the list
};

// declaring the functions I'm going to be calling in main
void createList(Node*& head, int n);
void addToMiddle(Node* head);
void deleteFromMiddle(Node* head);
void printList(Node* head);

int main()
{
    //asking user to input the number of desired nodes and storing that as n
    int n; 
    printf(" Input the number of nodes : ");
    scanf("%d", &n);

    Node* head = nullptr; // initializing the head pointer to null
    
    createList(head, n); //calling function with the variable of how many nodes to create
    printList(head); //printing that initial list with no modifications

    addToMiddle(head);//calling function that adds to the middle
    printList(head);//printing the list with the added node

    deleteFromMiddle(head);//calling function that deletes from the middle
    printList(head); //printing list with deleted node

    return 0;
}

// Function to create n nodes 
void createSingleList(Node*& head, int n) {
    Node* newNode; // Pointer to a new node
    Node* temp = nullptr; // Pointer to the last node in the list

    for (int i = 0; i < n; i++) {
        // Allocate memory for the new node and set its data and then points  the next to Null because there's nothing coming after it
        newNode = new Node;
        cout << "Enter data for node " << i+1 << ": ";
        cin >> newNode->data;
        newNode->next = nullptr;

        // If the list is empty, set the new node as the head
        if (head == nullptr) {
            head = newNode; // new node is made to point the first node in the list
            temp = newNode;
        } else {
            // if the head is not nul pointer, add the new node to the end of the list
            temp->next = newNode;
            temp = newNode;
        }
    }
}

// Function to add a new node with user-entered data to the middle of the list
void addToMiddle(Node* head) {
    int position, i;
    cout << "Enter the position of where you want to insert the new node: ";
    cin >> position;

    // Find the node at the specified position
    Node* temp = head;
    for (i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr) {
        cout << "Invalid position\n" << endl;
        return;
    }

    // Allocate memory for the new node and set its data
    Node* newNode = new Node;
    cout << "Enter data for the new node: ";
    cin >> newNode->data;

    // Insert the new node into the list
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to delete a user specified node in the middle of the list
void deleteFromMiddle(Node* head) {
    int position, i;
    cout << "Enter the position of the node you want to delete: ";
    cin >> position;

    // Find the node at the specified position
    Node* temp = head;
    for (i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position \n" << endl;
        return;
    }

    // Delete the node at the specified position
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

// Function to print all the data in the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

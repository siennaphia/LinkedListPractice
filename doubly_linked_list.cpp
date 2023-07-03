#include <iostream>
using namespace std;

// Defining the structure for a doubly linked list 
struct Node {
    int data; // Data stored in the node
    struct Node* next; // Pointer to the next node in the list
    struct Node* prev; // Pointer to the previous node in the list
};

// declaring the functions I'm going to be calling in main
void createList(Node*& head, Node*& tail, int n);
void deleteFromEnd(Node*& head, Node*& tail);
void insertAtBeginning(Node*& head, Node*& tail);
void printList(Node* head);


int main()
{
    //asking user to input the number of desired nodes and storing that as n
    int n; 
    cout << "Input the number of nodes: ";
    cin >> n;

    Node* head = nullptr; // initializing the head pointer to null
    Node* tail = nullptr; // initializing the tail pointer to null

    createList(head, tail, n); //calling function with the variable of how many nodes to create
    printList(head); //printing that initial list with no modifications
    
    deleteFromEnd(head, tail);//calling function that deletes from the end
    printList(head); //prints modified list

    insertAtBeginning(head, tail); //calling function that inserts at the begining
    printList(head); //prints new list


    return 0;
}

// Function to create n nodes 
void createList(Node*& head, Node*& tail, int n) {
    Node* newNode; // Pointer to a new node
    Node* temp = nullptr; // Pointer to the last node in the list

//create n entered amount of nodes 
    for (int i = 0; i < n; i++) {
        // Allocate memory for new node and set its data and pointers to null
        newNode = new Node;
        cout << "Enter data for node " << i+1 << ": ";
        cin >> newNode->data;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        // If the list is empty, set the new node as the head and tail
        if (head == nullptr) {
            head = newNode; // new node is made to point the first node in the list
            tail = newNode; // new node is made to point the last node in the list
        } else {
            // if the head is not null pointer, add the new node to the end of the list
            newNode->prev = temp;
            temp->next = newNode;
            tail = newNode;
        }
        temp = newNode; // update the temp pointer to point to the last node
    }
}

void deleteFromEnd(Node*& head, Node*& tail) {
    // Check if list is empty
    if (tail == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    // Check if there is only one node in the list
    if (tail == head) {
        delete tail;
        tail = nullptr;
        head = nullptr;
        return;
    }

    // Otherwise, traverse to the second-to-last node and update pointers
    Node* secondToLast = tail->prev;
    delete tail;
    tail = secondToLast;
    tail->next = nullptr;
    
    cout << "End Node Deleted \n";

}

void insertAtBeginning(Node*& head, Node*& tail) {
    // Create new node and set its data
    Node* newNode = new Node;
    newNode->data;
    //ask user for data
    cout << "Enter data for new beginning node :";
        cin >> newNode->data;
    // Set new node's pointers
    newNode->prev = nullptr;
    newNode->next = head;

    // Update head node's pointers
    if (head != nullptr) {
        head->prev = newNode;
    } else {
        tail = newNode;
    }
    head = newNode;
}

// Function to print all the data in the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

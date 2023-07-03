# LinkedListTraversal Practice

This repository is for practicing Linked List Traversal using C++. It consists of two separate exercises with two different linked list structures: Single Linked List and Doubly Linked List.

## Contents
- `single_linked_list.cpp`: C++ program implementing Single Linked List and performing different operations.
- `doubly_linked_list.cpp`: C++ program implementing Doubly Linked List and performing different operations.

## Single Linked List
A single linked list is a type of linear data structure where each element is a separate object and each object is connected via pointers to its adjacent elements.

### Functions
- `createList`: This function creates a linked list of 'n' nodes entered by the user.
- `addToMiddle`: This function allows the user to add a node in the middle of the linked list.
- `deleteFromMiddle`: This function allows the user to delete a node from the middle of the linked list.
- `printList`: This function prints all the data in the linked list.

### How to Run
1. Compile the code: `g++ single_linked_list.cpp -o single_linked_list`
2. Run the compiled program: `./single_linked_list`

## Doubly Linked List
A doubly linked list is a type of linked data structure that consists of a set of sequentially linked records called nodes. Each node contains three fields: two link fields (references to the previous and to the next node in the sequence of nodes) and one data field.

### Functions
- `createList`: This function creates a doubly linked list of 'n' nodes entered by the user.
- `deleteFromEnd`: This function deletes a node from the end of the linked list.
- `insertAtBeginning`: This function inserts a node at the beginning of the linked list.
- `printList`: This function prints all the data in the linked list.

### How to Run
1. Compile the code: `g++ doubly_linked_list.cpp -o doubly_linked_list`
2. Run the compiled program: `./doubly_linked_list`

## Prerequisites
- Basic knowledge of C++ programming.
- Basic understanding of Linked List Data Structure.

## Reflections and Learnings

Throughout the completion of these exercises, I gained a thorough understanding of how linked lists function, along with how to manipulate and traverse these data structures. Here are some key insights I've taken away:

1. **Understanding of Single and Doubly Linked Lists:** I learned how to implement single and doubly linked lists. Although the concept seemed simple initially – a series of nodes where each node has a reference to the next (and also the previous in the case of doubly linked lists), the practical application deepened my understanding of these data structures and their potential uses.

2. **Implementing Operations:** From creating linked lists to adding and deleting nodes at different positions, I acquired a clear comprehension of these operations and how they are implemented in code. I also noticed how these operations differ between singly and doubly linked lists, providing me a deeper understanding of the pros and cons of each.

3. **Dynamic Memory Management in C++:** This exercise allowed me to become more proficient with dynamic memory management in C++. Using `new` to create new nodes on the heap and `delete` to deallocate memory when a node is removed were essential aspects of this exercise. I now understand that careful memory management is crucial to avoid memory leaks and keep programs running efficiently.

4. **Traversal of Linked Lists:** By printing the lists after each operation, I got hands-on experience with linked list traversal. Seeing the list update in real-time helped solidify the idea that linked lists are dynamic structures.

5. **Error Checking:** The code involved error checking, such as ensuring a valid position is given for node insertion and deletion. This reinforced
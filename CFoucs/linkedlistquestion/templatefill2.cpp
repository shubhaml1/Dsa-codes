// C++ program for the above approach
#include <iostream>
using namespace std;

// Node class to represent
// a node of the linked list.
class Node {
    
public:
	//data members
    int data;
    Node *next;
	// Default constructor

	Node() {
        data = 0;
        next = NULL;
    }

	// Parameterised Constructor
    Node(int data) {
        this->data = data;          // this will point to currently created node;
        this->next = NULL;
    }
	
};

// Linked list class to
// implement a linked list.
class Linkedlist {
private:
    Node* head;

public:
	// Default constructor
	Linkedlist() {
        head = NULL;
    }

	// Function to insert a
	// node at the end of the
	// linked list. write function definition
    void insertNode(int);    
	void insertAtPos(int);                      

	// Function to print the
	// linked list.
    void printList();

	// Function to delete the
	// node at given position
	
};



// Function to insert a new node.
void insertNode(int data)
{
	// Create the new Node.
	Node* newNode = new Node(data); // parameterised constructor called

	// Assign to head
	if(head == NULL) {
        head = newNode;
        return;
    }

	// Traverse till end of list
	Node* temp = head;       // to point on the 1st node
	while (temp->next != NULL) {

		// Update temp
		temp = temp->next;  // to iterate over nodes 
	}

	// Insert at the last.
    temp->next = newNode;
}



// Function to print the
// nodes of the linked list.
void Linkedlist::printList()
{
	// Check for empty list.
	if(head == NULL) {
        cout<<"list is empty"<<endl;
        return;
    }

	// Traverse the list.
    Node* temp = head;
	while (temp != NULL) {

		cout << temp->data << " ";
        temp = temp->next;
	}
}

// void Linkedlist::insertAtPos(int pos, data) {	
// 	// Create the new Node.
// 	Node* newNode = new Node(data); // parameterised constructor called
// 	// at the begining
// 	if(pos == 1) {
// 		newNode->next = head;
// 		head = newNode;
// }
// }
// Driver Code
int main()
{
	// create an object to access the memberfunction 
    //of class linked list
    Linkedlist list;

	// Inserting nodes
	list.insertNode(10);
    list.insertNode(20);
    list.insertNode(30);
    list.insertNode(40);

	cout << "Elements of the list are: ";

	// Print the list
    list.printList();
	

	// Delete node at position 2.
	// list.deleteNode(2);

	// cout << "Elements of the list are: ";
	// list.printList();
	// cout << endl;
	return 0;
}



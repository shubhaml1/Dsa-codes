// C++ program for the above approach
#include <iostream>
using namespace std;

// Node class to represent
// a node of the linked list.
class  {
public:
	//data members
   
	// Default constructor
	Node() {
        
    }

	// Parameterised Constructor
    Node() {
    
    }
	
};

// Linked list class to
// implement a linked list.
class  {
	

public:
	// Default constructor
	

	// Function to insert a
	// node at the end of the
	// linked list.
                                            //function
                                            //defnition

	// Function to print the
	// linked list.


	// Function to delete the
	// node at given position
	
};



// Function to insert a new node.
void Linkedlist::insertNode(int data)
{
	// Create the new Node.
	

	// Assign to head
	

	// Traverse till end of list
	
	while () {

		// Update temp
		
	}

	// Insert at the last.
}

// Function to print the
// nodes of the linked list.
void Linkedlist::printList()
{
	

	// Check for empty list.
	

	// Traverse the list.
	while () {
		
	}
}

// Driver Code
int main()
{
	// create an object to access the memberfunction 
    //of class linked list


	// Inserting nodes
	

	cout << "Elements of the list are: ";

	// Print the list
	

	// Delete node at position 2.
	// list.deleteNode(2);

	// cout << "Elements of the list are: ";
	// list.printList();
	// cout << endl;
	return 0;
}


// Function to delete the
// node at given position
// void Linkedlist::deleteNode(int nodeOffset)
// {
// 	Node *temp1 = head, *temp2 = NULL;
// 	int ListLen = 0;

// 	if (head == NULL) {
// 		cout << "List empty." << endl;
// 		return;
// 	}

// 	// Find length of the linked-list.
// 	while (temp1 != NULL) {
// 		temp1 = temp1->next;
// 		ListLen++;
// 	}

// 	// Check if the position to be
// 	// deleted is greater than the length
// 	// of the linked list.
// 	if (ListLen < nodeOffset) {
// 		cout << "Index out of range"
// 			<< endl;
// 		return;
// 	}

// 	// Declare temp1
// 	temp1 = head;

// 	// Deleting the head.
// 	if (nodeOffset == 1) {

// 		// Update head
// 		head = head->next;
// 		delete temp1;
// 		return;
// 	}

// 	// Traverse the list to
// 	// find the node to be deleted.
// 	while (nodeOffset-- > 1) {

// 		// Update temp2
// 		temp2 = temp1;

// 		// Update temp1
// 		temp1 = temp1->next;
// 	}

// 	// Change the next pointer
// 	// of the previous node.
// 	temp2->next = temp1->next;

// 	// Delete the node
// 	delete temp1;
// }

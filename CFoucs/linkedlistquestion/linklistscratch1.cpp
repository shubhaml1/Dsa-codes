#include<iostream>
using namespace std;

class Node {
public:
    //data members
    int data;
    Node* next;
    //constructor call
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
// at the end of linklist 
void insert(int data, Node* &head) {
    Node* node = new Node(data);
    //when list is empty
    if(head == NULL) {
        head = node;
        return;
    }
    //insert at end of list
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    // now i'll insert my node at the end of list
    temp->next = node;

}

// insert at a given position
void insert(int data, int position, Node* &head) {
    Node* newNode = new Node(data); //newNode is an pointer
                                    // points to newly created 
                                    // node.

    if(position > 1) {
        cout<<"hey ";
        int counter = 1;
        Node* temp = head;
        while(temp && counter < position ) {
            
            if(counter == position - 1) {
                // perfect place to insert the node
                newNode->next = temp->next;
                temp->next = newNode;
            }
            temp = temp->next;
            counter++;
        }
    }
    else if(position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
}

void printLinkList(Node* &head) {
    if(head == NULL) {
        cout<<"list is empty"<<endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
// delete 1st node with given value
void deleteNode(int value, Node* &head) {
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if(temp->data == value) {
        if(prev) {
            prev->next = temp->next;
        }
        else {
            head = temp->next;
        }
        delete temp;
    }
}

// // delete node at a given position
// void delNode(int position, Node* &head) {
//     Node* temp = head;
//     Node* prev = NULL;
//     if(position > 1) {
//         int counter = 1;
//         while(temp && counter <= position ) {
            
//             if(counter == position) {
//                 // perfect place to insert the node
//                 prev->next = temp->next;
//                 delete temp;
//                 break;
//             }
//             prev = temp;
//             temp = temp->next;
//             counter++;
//         }
//     }
//     else if(position == 1) {
//         head = temp->next;
//         delete temp;
//         return;
//     }
// }

// delete node at a given position // duplicate
void delNode(int position, Node* &head) {
    Node* temp = head;
    Node* prev = NULL;
    if(position > 1) {
        int counter = 1;
        while(temp && counter < position ) {
            prev = temp;
            temp = temp->next;
            counter++;
        }
        
        prev->next = temp->next;
        temp->next = NULL;
        delete temp;
        

    }
    else if(position == 1) {
        head = temp->next;
        delete temp;
        return;
    }
}

int main() {
    Node* head = NULL;
    insert(10, head);
    insert(20, head);
    insert(30, head);
    insert(40, head);
    insert(50, 2, head);
    delNode(4, head);
    // deleteNode(50, head);
    // Node* node1 = new Node(10);
    // Node* node2 = new Node(20);
    // Node* node3 = new Node(40);
    // node1->next = node2;
    // node2->next = node3;
    // node3->next = NULL;
    // Node* head = node1;
    // printList(head);
    printLinkList(head);

    

    return 0;
}
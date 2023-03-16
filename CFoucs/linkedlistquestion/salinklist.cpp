#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertPos(int pos,Node* &head,int d){
    if(pos==1){
        insertHead(head,d);
        return;
    }
    Node* newNode=new Node(d);
    Node* preNode=head;
    for(int i=2;i<pos;i++){
        preNode=preNode->next;
    }
    newNode->next=preNode->next;
    preNode->next=newNode;
}
void deletePos(int pos,Node* &head){
    if(head==NULL){
        cout<<"list is empty.";
    }
    Node* nodedelete;
    if(pos==1){
        nodedelete=head;
        head=nodedelete->next;
    }
    else{
        Node* preNode=head;
        for(int i=2;i<pos;i++){
            preNode=preNode->next;
            if(preNode==NULL){
                cout<<"Out of Range";
            }
        }
        nodedelete=preNode->next;
        preNode->next=nodedelete->next;
    }
    delete nodedelete;
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertHead(head,12);
    print(head);
    insertTail(tail,5);
    print(head);
    insertHead(head,28);
    insertHead(head,11);
    print(head);
    deletePos(1,head);
    print(head);
    // insertHead(head,9);
    // insertHead(head,0);
    // print(head);
    // insertPos(5,head,-1);
    // print(head);
    // insertPos(9,head,-1);
    // print(head);

    return 0;
}
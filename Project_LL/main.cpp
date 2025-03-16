#include<iostream>




class Node {
public:
    int data;
    Node *next;

    /*Node(int d) {
        data = d;
        next = NULL;
    }*/

    /*Node(int data) {
        this->data = data;
        next = NULL;
    }*/

    Node(int data) {
         this->data = data;
         this->next = NULL;

    }




};

void InsertionAtHead(Node* &head, int d) {   // no copy of head is made original memory is used and made changes on that.

    //new node creation
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;



}

int main() {

    // Dynamically allocating memory
    Node *node1 = new Node(10); // Heap usage, we get address from new NOde() stored in pointer node1.

    std::cout<<node1->data<<std::endl;
    std::cout<<node1->next<<std::endl;

    return 0;
}
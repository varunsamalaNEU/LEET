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

void InsertionAtTail(Node* &head, int d) {

    if (head == NULL) {
        head = new Node(d);
        head->next = NULL;
        return;
    }
    Node *ptr = head;
    while (ptr->next != NULL) {
         ptr = ptr->next;
    }
    Node* temp = new Node(d);
    temp->next = NULL;
    ptr->next = temp;
}
void InsertionAtPostion(Node* &head, int position, int d) {


    if (position == 0) {
        InsertionAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 0;
    while (cnt<position-1) {
        temp = temp->next;
        cnt++;
    }
    Node* NodeToNext = new Node(d);
    NodeToNext->next = temp->next;
    temp->next = NodeToNext;

}

void Print(Node* &head) {
    Node* temp = head;

    while (temp != NULL) {
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    std::cout<<"\n";
}

int main() {

    // Dynamically allocating memory
    Node *node1 = new Node(10); // Heap usage, we get address from new NOde() stored in pointer node1.

    /*std::cout<<node1->data<<std::endl;
    std::cout<<node1->next<<std::endl;*/


    Node *head = node1;
    //std::cout<<"Enter value of node1: "<<node1;
    Print(head);
    InsertionAtTail(head, 2);
    Print(head);
    InsertionAtTail(head, 3);
    Print(head);
    InsertionAtPostion(head,0, 4);
    Print(head);
    return 0;
}
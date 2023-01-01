#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

// inserts a node at the end of the linked list
void insert(Node* &head, int value){
    // create the new node
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    // create a reference for every node to traverse, start with head
    Node* current = head;
    
    while(current->next != NULL){
        current = current->next;
    }

    current->next = newNode;
}

void deleteNode(Node* &head, int value){

    if(head->data == value){
        head = head->next;
        return;
    }

    Node* current = head;

    // 1st way
    while(current->next->data != value){
        current = current->next;
    }

    Node* nodeToDelete = current->next;
    current->next = current->next->next;
    delete nodeToDelete;
    

    // 2nd way - if you want to handle not found(e.g. if we want to delete 8, 8 is not in the list)
    // while(current->next != NULL){
    //     if(current->next->data == value){
    //         Node* nodeToDelete = current->next;
    //         current->next = current->next->next;
    //         delete nodeToDelete;
    //         return;
    //     }
    //     current = current->next;
    // }
    // cout << "Node not found" << endl;
}

void display(Node* head){
    Node* current = head;

    while(current != NULL){
        cout << current->data << "-->";
        current = current->next;
    }
}

int main(){
    // create a node
    Node* first = new Node();

    // assign data to first node
    first->data = 1;

    // create the head
    Node* head = first;

    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    deleteNode(head, 4);

    display(head);

    return 0;
}
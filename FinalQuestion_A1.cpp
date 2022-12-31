#include <iostream>

using namespace std;

// Definition of a node in the linked list
class Node {
public:
  char data;
  Node* next;
};

// Deletes the node with the given data from the linked list
void deleteNode(Node* head, char data) {
  Node* curr = head;
  while (curr->next != NULL) {
    if (curr->next->data == data) {
      // Save a pointer to the node to be deleted
      Node* nodeToDelete = curr->next;

      // Skip the node to be deleted by linking the previous node to the following node
      curr->next = nodeToDelete->next;

      // Delete the node
      delete nodeToDelete;
      break;
    }
    curr = curr->next;
  }
}

void displayList(Node* head){
  Node* temp = head;
  // cout << temp->data << " " << temp->next << endl;
  while(temp != NULL){
    cout << temp->data << "-->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main() {
    // Create nodes
    Node* A = new Node();
    Node* B = new Node();
    Node* C = new Node();
    Node* D = new Node();

    // insert the data
    A->data = 'A';
    B->data = 'B';
    C->data = 'C';
    D->data = 'D';

    A->next = B;
    B->next = C;
    C->next = D;
    D->next = NULL;

    cout << "A, B, C, D is added" << endl;

    // create head
    Node* head = new Node();
    head = A;

    // Delete the node with data 'C' from the linked list
    deleteNode(head, 'C');
    cout << "C is deleted" << endl;

    displayList(head);

    return 0;
}

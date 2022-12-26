#include <iostream>

using namespace std;

class Node {
   public:
    int data;
    Node* next;
};

int main() {
    // create nodes
    Node* firstNode = new Node();
    Node* secondeNode = new Node();
    Node* thirdNode = new Node();

    // assign values
    firstNode->data = 2;
    secondeNode->data = 4;
    thirdNode->data = 5;

    firstNode->next = secondeNode;
    secondeNode->next = thirdNode;
    thirdNode->next = NULL;

    // create head
    Node* head = new Node();
    head = firstNode;

    // display linked list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "-->";
        temp = temp->next;
    }

    // functions
    return 0;
}

// int gpa[] = {4, 3, 4, 4, 3};

// for (int i = 0; i < 4; i++) {
//     cout << gpa[i] << endl;
// }
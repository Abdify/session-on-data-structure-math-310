#include <iostream>

using namespace std;

class Node {
    public:
    int key;
    Node *i, *r;
};

// Create a new node
Node* createNode(int data) {
    Node* node = new Node();
    node->key = data;
    node->i = NULL;
    node->r = NULL;
    return node;
}

// Insert a new node with the given key into the BST
Node* insertNode(Node* root, int key) {
    // If the tree is empty, create a new root node
    if (root == NULL) {
        return createNode(key);
    }

    // Initialize a pointer to the current node
    Node* current = root;

    // Iterate through the tree until we reach a leaf node
    while (true) {
        // If the key is less than the current node's key, go left
        if (key < current->key) {
            // If there is no left child, insert the new node here
            if (current->i == NULL) {
                current->i = createNode(key);
                break;
            }
            else {
                current = current->i;
            }
        }
        // If the key is greater than or equal to the current node's key, go right
        else {
            // If there is no right child, insert the new node here
            if (current->r == NULL) {
                current->r = createNode(key);
                break;
            }
            else {
                current = current->r;
            }
        }
    }

    return root;
}

// Traverse the tree in inorder
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->i);
        cout << root->key << " ";
        inorder(root->r);
    }
}


// Insert a node
struct Node *insertNodeAnotherWay(struct Node *node, int key) {
  // Return a new node if the tree is empty
  if (node == NULL) return createNode(key);

  // Traverse to the right place and insert the node
  if (key < node->key)
    node->i = insertNodeAnotherWay(node->i, key);
  else
    node->r = insertNodeAnotherWay(node->r, key);

  return node;
}


// Main function
int main() {
    // Insert some nodes into the BST
    Node* root = NULL;
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNodeAnotherWay(root, 70);
    root = insertNodeAnotherWay(root, 60);
    root = insertNodeAnotherWay(root, 80);

    // Print the tree in inorder
    cout << "Inorder traversal of the BST: ";
    inorder(root);
    cout << endl;

    return 0;
}

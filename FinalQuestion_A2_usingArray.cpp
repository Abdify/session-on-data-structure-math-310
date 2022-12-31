#include <iostream>
#include <string>

using namespace std;

// Global variables
const int MAX_SIZE = 100;
string stack[MAX_SIZE];
int top = -1;

// Returns true if the stack is empty, false otherwise
bool empty() {
  return top == -1;
}

// Pushes an element onto the stack
void push(string element) {
  if (top == MAX_SIZE - 1) {
    cout << "Error: Stack overflow" << endl;
    return;
  }
  top++;
  stack[top] = element;
}

// Removes the top element from the stack
void pop() {
  if (empty()) {
    cout << "Error: Stack underflow" << endl;
    return;
  }
  top--;
}

// Returns the value of the top element in the stack
string peek() {
  if (empty()) {
    cout << "Error: Stack is empty" << endl;
    return "";
  }
  return stack[top];
}


int main() {
  // Push some countries onto the stack
  push("France");
  cout << "France pushed into stack" << endl;
  // 👆 we can show this messages either after the function like this or we can also show them inside the push function. I thought is is easier for you, so I implemented this one.
  
  push("Russia");
  cout << "Russia pushed into stack" << endl;

  // Check the top element of the stack
  cout << "Top Country is " << peek() << endl;

  // Push another country onto the stack
  push("Turkey");
  cout << "Turkey pushed into stack" << endl;

  // Pop the top element from the stack
  pop();
  cout << "Turkey popped from stack" << endl;

  // Pop the top element from the stack
  pop();
  cout << "Russia popped from stack" << endl;

  // Check the top element of the stack
  cout << "Top Country is " << peek() << endl;
}



// ********************************** USING CLASS ************************************

// #include <iostream>
// #include <string>

// using namespace std;

// const int MAX_SIZE = 100;

// // Definition of the Stack class
// class Stack {
// private:
//   string stack[MAX_SIZE];
//   int top;

// public:
//   Stack(){
//     top = -1;
//   }

//   void push(string element) {
//     if (top == MAX_SIZE - 1) {
//       cout << "Error: Stack overflow" << endl;
//       return;
//     }
//     stack[++top] = element;
//   }

//   void pop() {
//     if (empty()) {
//       cout << "Error: Stack underflow" << endl;
//       return;
//     }
//     top--;
//   }

//   string peek() {
//     if (empty()) {
//       cout << "Error: Stack is empty" << endl;
//       return "";
//     }
//     return stack[top];
//   }

//   bool empty() {
//     return top == -1;
//   }
// };

// int main() {
//   Stack countries;

//   // Push some countries onto the stack
//   countries.push("France");
//   cout << "France pushed into stack" << endl;
//   countries.push("Russia");
//   cout << "Russia pushed into stack" << endl;

//   // Check the top element of the stack
//   cout << "Top Country is " << countries.peek() << endl;

//   // Push another country onto the stack
//   countries.push("Turkey");
//   cout << "Turkey pushed into stack" << endl;

//   // Pop the top element from the stack
//   countries.pop();
//   cout << "Turkey popped from stack" << endl;

//   // Pop the top element from the stack
//   countries.pop();
//   cout << "Russia popped from stack" << endl;

//   // Check the top element of the stack
//   cout << "Top Country is " << countries.peek() << endl;

//   return 0;
// }

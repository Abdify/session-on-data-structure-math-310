#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  stack<string> countries;

  // Push some countries onto the stack
  countries.push("France");
  cout << "France pushed into stack" << endl;
  countries.push("Russia");
  cout << "Russia pushed into stack" << endl;

  // Check the top element of the stack
  cout << "Top Country is " << countries.top() << endl;

  // Push another country onto the stack
  countries.push("Turkey");
  cout << "Turkey pushed into stack" << endl;

  // Pop the top element from the stack
  countries.pop();
  cout << "Turkey popped from stack" << endl;

  // Pop the top element from the stack
  countries.pop();
  cout << "Russia popped from stack" << endl;

  // Check the top element of the stack
  cout << "Top Country is " << countries.top() << endl;

  return 0;
}

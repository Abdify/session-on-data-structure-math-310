#include <iostream>

using namespace std;

// Global variables
const int MAX_SIZE = 100;
int queue[MAX_SIZE], front = 0, rear = 0;
// We can also impelement 👆 this by initializing front = -1 and rear = -1; Then it will be a little bit different. see the queueUsingArray.cpp file for that.

// pushes an element to the queue
void insert(int value){
    if(rear >= MAX_SIZE - 1){
        cout << "Queue full!" << endl;
        return;
    }

    rear++;
    queue[rear] = value;
}

// be careful the function name can't be "delete()" here, because delete is a keyword in c++
void deleteElement(){
    if(front == rear){
        cout << "Queue is empty" << endl;
        return;
    }

    front++;
}


void display(){
    if(front == rear){
        cout << "Queue is empty!" << endl;
        return;
    }

    for(int i = front+1; i <= rear; i++){
        cout << queue[i] << endl;
    }
}

int main () {
    cout << "++++++++++++++ Main menu ++++++++++++++++" << endl;

    cout << "1. Insert an element" << endl;
    cout << "2. Delete an element" << endl;
    cout << "3. Disaply the queue" << endl;
    cout << "4. Exit" << endl;


    int input;

    do{
        cout << "Enter your choice: ";
        cin >> input;
        if(input == 1){
            cout << "Enter value to be inserted: ";
            int val;
            cin >> val;
            insert(val);
            cout << "Successfully inserted " << val << endl;
        } else if(input == 2) {
            deleteElement();
            cout << "Successfully deleted" << endl;
        } else if(input == 3){
            display();
        } else if(input == 4) {
            cout << "Thank you for using." << endl;
        } else {
            cout << "Invalid input" << endl;
        }
    } while(input != 4);


    return 0;
}
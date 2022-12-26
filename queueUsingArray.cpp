#include <iostream>

using namespace std;

int queue[100], n = 100, front = -1, back = -1;

void push(int val){
    if(back >= n - 1){
        cout << "Queue is full!" << endl;
        return;
    }

    if(front <= -1){
        front = 0;
    }

    back++;
    queue[back] = val;

}

void pop(){
    if(front == -1 || front > back){
        cout << "Queue empty" << endl;
        return;
    }

    cout << "Popped: " << queue[front] << endl;
    front++;
}

void display(){
    if(front == -1 || front > back){
        cout << "Queue empty" << endl;
        return;
    }

    for(int i = front; i <= back; i++){
        cout << queue[i] << endl;
    }
}

int main(){
    push(3);
    push(4);
    // push(5);
    // push(8);
    // push(1);


    pop();
    pop();
    pop();

    display();


    return 0;
}
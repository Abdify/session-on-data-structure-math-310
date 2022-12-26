#include <iostream>

using namespace std;
    
int st[100], n = 100, top = -1;

void push(int val){
    if(top >= n - 1){
        cout << "Stack is full!" << endl;
        return;
    }
    top++;
    st[top] = val;
}

void pop(){
    if(top <= -1){
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Popped element is: " << st[top] << endl;
    top--;
}

void display(){
    if(top < 0){
        cout << "Stack is empty" << endl;
        return;
    }

    for(int i = top; i >= 0; i--){
        cout << st[i] << endl;
    }

}

int main(){

    push(4);
    push(1);
    push(9);
    push(2);

    pop();

    display();
    return 0;
}
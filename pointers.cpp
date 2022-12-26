#include <iostream>

using namespace std;

int main() {
    // get address of a variable
    int num = 5;
    cout << "The address of num is: " << &num << endl;

    // assigning address to pointer
    int* ptr = &num;
    cout << "The address stores in ptr is: " << ptr << endl;

    // assigning one pointer to another
    int num2 = 6;
    int* ptr2 = &num2;
    // ptr = ptr2;

    // get value from pointer
    cout << "The value stored in ptr is: " << *ptr << endl;

    // Get the updated value stored in pointer
    num = 10;
    cout << "The value of ptr after updating num: " << *ptr << endl;

    // Mistakes
    // ptr = num;
    // *ptr = &num;

    // can be of any type
    float* ptr2;

    return 0;
}
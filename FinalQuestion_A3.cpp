#include <iostream>

using namespace std;

int main(){
    // Declare an array of characters
    char data[] = {'A', 'E', 'B', 'D', 'C'};

    // Use a simple bubble sort algorithm to sort the array
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4 - i; j++){
            if (data[j] > data[j + 1]){
                char temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    // Print out the sorted array
    cout << "Sorted data: ";
    for (int i = 0; i < 5; i++){
        cout << data[i] << " ";
    }

    return 0;
}

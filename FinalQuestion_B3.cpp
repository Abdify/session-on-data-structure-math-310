#include <iostream>

using namespace std;

int main(){
    // Initialize the array and the item to be searched
    char items[] = {'A', 'F', 'N', '5', 'P'};
    char item = 'P';

    // Perform the binary search
    int low = 0;
    int high = sizeof(items) / sizeof(items[0]) - 1;
    
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (items[mid] == item){
            cout << "Item is found, and location is: " << mid << endl;
            return 0;
        }
        else if (items[mid] < item){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    // If the item was not found, print a message
    cout << "Item was not found in the array." << endl;
    return 0;
}

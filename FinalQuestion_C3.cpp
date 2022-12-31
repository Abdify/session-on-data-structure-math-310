#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(char items[], char item, int low, int high){
    while(low <= high){
        int mid = (high + low) / 2;
        
        if(items[mid] == item){
            return mid;
        } else if(items[mid] < item){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    char items[] = {'A', 'P', 'N', 'S', 'F', 'B'};
    char item = 'P';

    // Binary search is applicable only in a sorted array
    // e.g: {'A', 'C', 'G', 'z'} => applicable here
    // {'Z', 'A', 'C', 'B'} => not applicable here
    // if the array is unsorted, we need to sort it first

    int n = sizeof(items) / sizeof(items[0]);

    // We can use the sort function from <algorithm> library
    // Or we can implement a bubble sort manually
    sort(items, items + n);

    // bubble sort
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n - 1 - i; j++){
    //         if(items[j] > items [j + 1]){
    //             char temp = items[j];
    //             items[j] = items[j+1];
    //             items[j+1] = temp; 
    //         }
    //     }
    // }

    cout << "The sorted array is: ";
    for(int i = 0; i< n; i++){
        cout << items[i] << " ";
    }
    cout << endl;

    int result = binarySearch(items, item, 0, n-1);

    if(result == -1){
        cout << "Item not found!" << endl;
    } else {
        cout << "Item found at index: " << result << endl;
    }

    
    return 0;
}
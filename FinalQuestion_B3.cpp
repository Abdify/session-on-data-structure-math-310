#include <iostream>

using namespace std;

int main(){
    // Initialize the items and the item to be searched
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
    cout << "Item was not found in the items." << endl;
    return 0;
}


// *************** USING RECURSION *****************

// #include <iostream>
// using namespace std;

// int binarySearch(char items[], int x, int low, int high) {
//   if (high >= low) {
//     int mid = low + (high - low) / 2;

//     // If found at mid, then return it
//     if (items[mid] == x)
//       return mid;

//     // Search the left half
//     if (items[mid] > x)
//       return binarySearch(items, x, low, mid - 1);

//     // Search the right half
//     return binarySearch(items, x, mid + 1, high);
//   }

//   return -1;
// }

// int main() {
//   char items[] = {'A', 'F', 'N', '5', 'P'};
//   char item = 'P';
//   int n = sizeof(items) / sizeof(items[0]);

//   int result = binarySearch(items, item, 0, n - 1);

//   if (result == -1)
//     cout << "Not found" << endl;
//   else
//     cout << "Element is found at index " << result << endl;
// }








// ************ USING NORMAL FUNCTION *******************

// #include <iostream>
// using namespace std;

// int binarySearch(char items[], int x, int low, int high) {
  
// 	// Repeat until the pointers low and high meet each other
//   while (low <= high) {
//     int mid = low + (high - low) / 2;

//     if (items[mid] == x)
//       return mid;

//     if (items[mid] < x)
//       low = mid + 1;

//     else
//       high = mid - 1;
//   }

//   return -1;
// }

// int main() {
//   char items[] = {'A', 'F', 'N', '5', 'P'};
//   char item = 'P';
//   int n = sizeof(items) / sizeof(items[0]);

//   int result = binarySearch(items, item, 0, n - 1);

//   if (result == -1)
//     cout << "Not found" << endl;
//   else
//     cout << "Element is found at index " << result << endl;
// }
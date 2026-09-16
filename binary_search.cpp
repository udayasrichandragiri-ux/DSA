#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    int position = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            position = mid;
            break;
        } 
        else if (key < arr[mid]) {
            high = mid - 1;
        } 
        else {
            low = mid + 1;
        }
    }

    if (position == -1) {
        cout << "Element not found.";
    } else {
        cout << "Element found at index " << position
             << " (position " << position + 1 << ").";
    }

    return 0;
}
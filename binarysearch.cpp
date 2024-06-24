#include <iostream>
using namespace std;

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n; 
    cout << "Enter the number to search: ";
    cin >> n;

    int start = 0;
    int end = 8;
    bool found = false;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == n) {
            found = true;
            cout << "Element found at index " << mid << endl;
            break;
        } else if (arr[mid] < n) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

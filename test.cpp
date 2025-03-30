#include <bits/stdc++.h>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    // have multiple way to find n like how you use .size() in vector
    // but this is list you need to use this way to find size
    // sizeof(arr) => 5 * 4 byte = 20 byte
    // sizeof(arr[0]) => 4 byte
    // then n = 20 byte / 4 byte = 5 (count array)
    int n = sizeof(arr) / sizeof(arr[0]);
    // sizeof command give size of element in array in byte
    int result = binarySearch(arr, 0, n - 1, x);
    // use n-1 because index start from 0 not 1
    if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    return 0;
}
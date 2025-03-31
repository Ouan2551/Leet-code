#include <bits/stdc++.h>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        // use low <= high because
        // low is start index to find
        // high is end index to find
        int mid = low + (high - low) / 2;
        // use this formula to find middle index because
        // this is original formula mid = (low + high)/2


        // example mid index
        // 0 + (4 - 0) / 2 (first loop)
        // but this problem 4 < 10
        // then low = mid + 1 = 2 + 1 = 3
        // low value change then search area change
        // new value mid = 3 + (4 - 3) / 2 = 3 + 0 = 3

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
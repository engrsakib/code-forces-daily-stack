#include <bits/stdc++.h>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Driver code
int main(void)
{
    // _Created : 16 February 2025 ||  09:07:06
    // _File    : Binary_Search.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;
    // Pass the underlying array to binarySearch using .data()
    int result = binarySearch(arr.data(), 0, n - 1, x);

    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << x << " Element is present at index " << result;
        
    return 0;
}

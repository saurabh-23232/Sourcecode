// This is a C++ program of finding MAX and MIN in an array 

#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}

int getMax(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
}

int main()
{
    int arr[] = { 12, 1234, 45, 67, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element of array: " << getMin(arr, n)
         << "\n";
    cout << "Maximum element of array: " << getMax(arr, n);
    return 0;
}

// -------------------------------------  How it works  ----------------------------------------

// Start with the first element as the minimum:
// Minimum = 12
// Array: [12, 1234, 45, 67, 1]

// Compare with 1234:
// 12 < 1234 (Minimum remains 12)

// Compare with 45:
// 12 < 45 (Minimum remains 12)

// Compare with 67:
// 12 < 67 (Minimum remains 12)

// Compare with 1:
// 1 < 12 (Update Minimum to 1)

// Final Minimum: 1

// TO FIND MAX

// Start with the first element as the maximum:
// Maximum = 12
// Array: [12, 1234, 45, 67, 1]

// Compare with 1234:
// 12 < 1234 (Update Maximum to 1234)

// Compare with 45:
// 1234 > 45 (Maximum remains 1234)

// Compare with 67:
// 1234 > 67 (Maximum remains 1234)

// Compare with 1:
// 1234 > 1 (Maximum remains 1234)

// Final Maximum: 1234


// Result: Minimum Element: 1    and     Maximum Element: 1234

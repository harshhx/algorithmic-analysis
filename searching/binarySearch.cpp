#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int e)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;
    if (arr[mid] > e)
        binarySearch(arr, low, mid - 1, e);
    else if (arr[mid] < e)
        binarySearch(arr, mid + 1, high, e);
    else
        return mid;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, 0, n - 1, 7);
    return 0;
}
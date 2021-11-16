#include <bits/stdc++.h>

using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i+1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        swap(arr[largest], arr[left]);
    if (right < n && arr[right] > arr[largest])
        swap(arr[largest], arr[right]);
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    for (auto e : arr)
        cout << e << " ";
    return 0;
}
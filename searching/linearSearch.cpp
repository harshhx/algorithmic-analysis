#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7, 5, 6, 2, 74, 452, 1};
    int element = 70;

    for (auto e : arr)
    {
        if (e == element)
        {
            cout << "element Found!!!";
            return 0;
        }
    }
    cout << "Element not Found!!!";
    return 0;
}
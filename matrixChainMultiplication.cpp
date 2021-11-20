#include <bits/stdc++.h>
using namespace std;

int MCM(int arr[], int n)
{
    int dp[n - 1][n - 1];

    for (int g = 0; g < n - 1; g++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int i = j-g;
            if (g == 0)
            {
                dp[i][j] = 0;
            }
            else if (g == 1)
                dp[i][j] = arr[i] * arr[j] * arr[j + 1];
            else
            {
                int res = INT_MAX;
                for (int k = 0; k < j; k++)
                {
                    int l = dp[i][k];
                    int r = dp[k + 1][j];
                    int m = arr[i] * arr[k + 1] * arr[j + 1];
                    res = min(res, l + r + m);
                }
                dp[i][j] = res;
            }
        }
    }
    return dp[0][n-2];
}

int main()
{
    int matrices[] = {1,3,1,4,1,5};
    int n = sizeof(matrices) / sizeof(matrices[0]);
    cout << MCM(matrices, n);
    return 0;
}
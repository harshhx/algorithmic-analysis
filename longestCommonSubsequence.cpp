#include <bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2)
{
    int dp[(s1.length())][(s2.length())];
    for (int i = 0; i <= s1.length(); i++)
        dp[i][0] = 0;
    for (int i = 0; i <= s2.length(); i++)
        dp[0][i] = 0;
    for (int i = 1; i <= s1.length(); i++)
    {
        for (int j = 1; j <= s2.length(); j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    return dp[s1.length()][s2.length()];
}

int main()
{
    cout<<LCS("abcde", "ace");
    return 0;
}

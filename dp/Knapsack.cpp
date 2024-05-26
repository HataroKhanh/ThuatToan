#include <bits/stdc++.h>
using namespace std;
int n, s, dp[1003][1003], w[1003], v[1003];
int main()
{

    cin >> n >> s;

    for (int i = 1; i <= n; i++)
        cin >> w[i];
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (w[i] <= j)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
}
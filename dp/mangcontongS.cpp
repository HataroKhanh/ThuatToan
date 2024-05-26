#include <bits/stdc++.h>
using namespace std;
int n, s, a[1003], dp[1003][1003];
int main()
{

    cin >> n >> s;

    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= 0; j--)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]]);
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
}
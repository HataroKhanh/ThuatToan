#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int SMAX = 1e6 + 3;
int n, a[SMAX], tc, S;

int main()
{
    cin >> tc;
    while (tc--)
    {
        cin >> n >> S;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool dp[n + 1][S + 1]; // Initialize with false

        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = true;
        }

        // Fill th dp table in bottom-up manner
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= S; j++)
            {
                if (a[i - 1] > j)
                {
                    // If the current element is greater than the sum,
                    // we can't include it
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    // Either include the current element or exclude it
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
                }
            }
        }

        cout << (dp[n][S] ? "YES" : "NO") << endl;
    }
    return 0;
}
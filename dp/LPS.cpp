#include <bits/stdc++.h>
using namespace std;

int n, len, ans = 1;
bool dp[1003][1003];
string s;

int main(int argc, char const *argv[])
{
    cin >> n >> s;
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= n; i++)
        dp[i][i] = 1;

    for (int len = 2; len <= n; len++)
    {   
        for (int i = 1; i <= n - len + 1; i++)
        {
            int j = i + len - 1;

            if (len == 2 && s[i - 1] == s[j - 1])
                dp[i][j] = 1;
            else
            {
                dp[i][j] = dp[i + 1][j - 1] && (s[i - 1] == s[j - 1]);
            }

            if (dp[i][j])
                ans = max(ans, len);
        }
    }

    cout << ans;
    return 0;
}
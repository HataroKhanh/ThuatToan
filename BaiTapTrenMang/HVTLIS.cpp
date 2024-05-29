
/*
Dãy con tăng dần dài nhất (Longest Increasing Subsequence - LIS)

Tìm dãy con không nhất thiết là liên tiếp, có độ dài cực đại của một dãy cho trước mà các phần tử của dãy con được sắp xếp theo trật tự giá trị tăng dần.
Ví dụ, độ dài của LIS của dãy {10, 22, 9, 33, 21, 50, 41, 60, 80} là 6 và LIS ={10, 22, 33, 50, 60, 80}.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, a[10003], dp[10003];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, dp[i]);
    cout << ans;
    return 0;
}
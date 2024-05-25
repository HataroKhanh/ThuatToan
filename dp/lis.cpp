#include <bits/stdc++.h>
using namespace std;

int n, a[1007], l[1007], ans = 1;

int main(int argc, char const *argv[])
{
    /* code */
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        l[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (a[i] > a[j])
            {
                l[i] = max(l[i], l[j] + 1);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, l[i]);
        cout << l[i] << ' ';
        cout << '\n';
    }
    cout << ans;

    return 0;
}

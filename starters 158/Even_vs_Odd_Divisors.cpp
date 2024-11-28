// https://www.codechef.com/START158D/problems/EVENODDDIV

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int even = 0, odd = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    if (even == odd)
        cout << 0 << nl;
    else if (even > odd)
        cout << 1 << nl;
    else
        cout << -1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
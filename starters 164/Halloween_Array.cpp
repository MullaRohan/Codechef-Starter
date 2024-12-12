// Date: 11-12-2024 at 21:12 BST
// Link: https://www.codechef.com/START164C/problems/SPC2025Q5
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    ll n, low, high;
    cin >> n >> low >> high;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    for (ll i = 0; i < n; i++)
    {
        if (i)
        {
            ll ans = v[i - 1] ^ v[i];
            if (ans <= low || ans >= high)
            {
                cout << "NO" << nl;
                return;
            }
        }
    }
    cout << "YES" << nl;
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
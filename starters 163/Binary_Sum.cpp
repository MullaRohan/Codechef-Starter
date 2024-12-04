// Date: 04-12-2024 at 20:33 BST
// Link: https://www.codechef.com/START163D/problems/BINARYSUM
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
            cnt++;
    }
    if (b == cnt || b == (cnt - 1))
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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
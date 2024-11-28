// Date: 27-11-2024 at 20:36 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    int need = ((n + 1) * 100) / 2;
    if (need - sum > 100)
        cout << -1 << nl;
    else if (sum > need)
        cout << 0 << nl;
    else
        cout << need - sum << nl;
    // cout << need << nl;
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
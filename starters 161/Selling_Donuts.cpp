// Date: 20-11-2024 at 20:35 BST
// Link: https://www.codechef.com/START161D/problems/DONUTSELL
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> ar(n), br(m);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[i + 1] = ar[i];
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        mp[x]--;
        if (mp[x] < 0)
            ans++;
    }
    cout << ans << nl;
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
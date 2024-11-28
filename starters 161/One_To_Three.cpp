// Date: 28-11-2024 at 10:42 BST
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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i - 1] + v[i + 1] == 4)
            if (v[i] > 2)
                v[i] = 4 - v[i];
    }
    for (int i = n - 2; i >= 1; i--)
    {
        if (v[i - 1] + v[i + 1] == 4)
            if (v[i] > 2)
                v[i] = 4 - v[i];
    }
    int sum = 0;
    for (auto x : v)
        sum += x;
    cout << sum << nl;
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
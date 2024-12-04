// Date: 04-12-2024 at 21:01 BST
// Link: https://www.codechef.com/START163D/problems/MINBUY
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, k, low;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        a[i] *= b[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int count = 0;
    while (count < n && k > 0)
    {
        k -= a[count];
        count++;
    }
    if (k <= 0)
        cout << count << nl;
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
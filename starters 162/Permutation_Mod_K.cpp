// Date: 27-11-2024
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k > n || n == 1)
    {
        cout << -1 << nl;
        return;
    }

    vector<int> perm(n);
    iota(perm.begin(), perm.end(), 1);
    for (int i = 0; i < n; i++)
    {
        if (perm[i] % k == (i + 1) % k)
        {
            swap(perm[i], perm[(i + 1) % n]);
        }
    }

    // Print the permutation
    for (int i = 0; i < n; i++)
    {
        cout << perm[i] << " ";
    }
    cout << nl;
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

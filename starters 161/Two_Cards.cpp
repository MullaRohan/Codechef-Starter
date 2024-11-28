// Date: 20-11-2024 at 22:06 BST
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
    vector<int> ar(n), br(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < n; i++)
        cin >> br[i];
    int Max = -1, maxidx = -1;
    for (int i = 0; i < n; i++)
    {
        if (max(ar[i], br[i]) > Max)
        {
            Max = max(ar[i], br[i]);
            maxidx = i;
        }
    }
    int a = 0, aidx = -1, b = 0, bidx = -1;
    for (int i = n - 1; i >= 0; --i)
    {
        if (ar[i] > a)
        {
            b = a;
            bidx = aidx;
            a = ar[i];
            aidx = i;
        }
        else if (ar[i] > b)
        {
            b = ar[i];
            bidx = i;
        }
    }
    a = max(ar[aidx], br[aidx]);
    b = max(ar[bidx], br[bidx]);
    if (a == b && Max == a)
        cout << "No" << nl;
    else
        cout << "Yes" << nl;
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
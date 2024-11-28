// Date: 27-11-2024
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
    vector<ll> arr(n - 1);

    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    vector<ll> ans(n);
    ans[0] = arr[0] / 2;
    ans[1] = arr[0] - ans[0];
    for (int i = 2; i < n; i++)
        ans[i] = arr[i - 1] - ans[i - 1];
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}

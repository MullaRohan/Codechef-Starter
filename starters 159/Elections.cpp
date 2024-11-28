#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll a, b;
    cin >> a >> b;

    vector<int> v1(a);
    vector<int> v2(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < a; i++)
    {
        cin >> v2[i];
    }
    vector<int> loss;
    for (int i = 0; i < a; i++)
    {
        if (v1[i] <= v2[i])
        {
            loss.push_back(v2[i] - v1[i]);
        }
    }
    sort(loss.begin(), loss.end());
    int cnt = 0;
    for (int i = 0; i < loss.size(); i++)
    {
        if (b > loss[i])
        {
            cnt++;
            b = b - loss[i] - 1;
        }
    }
    int win = loss.size() - cnt;
    int ans = a - win;
    if (ans < win)
        cout << "NO\n";
    else
        cout << "YES\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
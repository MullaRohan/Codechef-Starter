// Date: 13-11-2024 at 22:21 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
string check(string s)
{
    string k;
    for (auto x : s)
    {
        k.push_back(x);
        if (k[k.size() - 2] == 'a' && k[k.size() - 1] == 'b')
            k.pop_back();
    }
    return k;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    string a = check(s1);
    string b = check(s2);
    if (a.size() != b.size())
    {
        cout << "No" << nl;
        return;
    }
    for (int i = 0; i < min(a.size(), b.size()); i++)
    {
        if (a[i] != b[i])
        {
            cout << "No" << nl;
            return;
        }
    }
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
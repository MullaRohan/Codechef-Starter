// Date: 04-12-2024 at 20:30 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= (b + c))
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    return 0;
}
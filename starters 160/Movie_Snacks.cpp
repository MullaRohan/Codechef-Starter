// Date: 13-11-2024 at 21:09 BST
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
    int val1 = 2 * a + 3 * b;
    int val2 = 2 * c + b;
    cout << min(val1, val2) << nl;
    return 0;
}
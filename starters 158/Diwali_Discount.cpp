// https://www.codechef.com/START158D/problems/DIWALIDISC

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << a - b << nl;
    else
        cout << 0 << nl;
    return 0;
}
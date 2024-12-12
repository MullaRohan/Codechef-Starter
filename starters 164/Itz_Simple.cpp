// Date: 11-12-2024 at 20:39 BST
// Link: https://www.codechef.com/START164C/problems/SPC2025Q2
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    ll n, ved, varun;
    cin >> n >> ved >> varun;
    vector<ll> v(n);
    ll chair_hgt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        chair_hgt += v[i];
    }
    // if (n == 1)
    // {
    //     if ((ved * v[0]) > (varun * v[0]))
    //         cout << "ved" << nl;
    //     else if ((ved * v[0]) < (varun * v[0]))
    //         cout << "Varun" << nl;
    //     else
    //         cout << "Equal" << nl;
    //     return;
    // }
    sort(v.begin(), v.end());
    chair_hgt -= v.back();
    if ((ved + v.back()) > (varun + chair_hgt))
        cout << "Ved" << nl;
    else if ((ved + v.back()) < (varun + chair_hgt))
        cout << "Varun" << nl;
    else
        cout << "Equal" << nl;
    // for(int i=0; i<n-1; i++)
    //     varun += v[i];
    // ved += v[n-1];
    // if(ved>varun) cout<<"Ved"<<nl;
    // else if(ved<varun) cout<<"Varun"<<nl;
    // else cout<<"Equal"<<nl;
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
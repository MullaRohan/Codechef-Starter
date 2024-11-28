// Date: 13-11-2024 at 22:06 BST
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

    int test;
    cin >> test;
    while (test--)
    {
        int ar;
        cin >> ar;
        vector<int> arb(ar + 1);
        for (int i = 1; i <= ar; i++)
            cin >> arb[i];
        int countones = 0;
        for (int i = 1; i < ar; i++)
        {
            if (arb[i] == 1)
                countones++;
        }
        int countzero = 0;
        for (int i = 2; i <= ar; i++)
        {
            if (arb[i] == 0)
                countzero++;
        }
        int minmumcunt = min(countones + countzero, ar - 1);
        int total = ar + minmumcunt;
        cout << total << endl;
    }
    return 0;
}
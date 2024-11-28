#include <iostream>
#include <vector>
using namespace std;

long long largest_divisor(long long P)
{
    for (long long d = P / 2; d >= 1; d--)
    {
        if (P % d == 0)
        {
            return d;
        }
    }
    return 1;
}

long long max_monsters_defeated(long long H, long long K)
{
    long long max_rounds = 0;

    for (long long m = 1; m <= K; ++m)
    {
        long long initial_health = H * m;
        long long rounds = 0;

        // Simulate the game
        while (initial_health > 1)
        {
            initial_health = largest_divisor(initial_health);
            rounds++;
        }

        max_rounds = max(max_rounds, rounds);
    }
    return max_rounds;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long H, K;
        cin >> H >> K;
        cout << max_monsters_defeated(H, K) << endl;
    }

    return 0;
}

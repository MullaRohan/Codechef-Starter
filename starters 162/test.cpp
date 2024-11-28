#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        if (K > N)
        {
            // If K > N, a valid permutation cannot exist
            cout << -1 << endl;
            continue;
        }

        vector<int> P(N);

        // Generate the permutation
        for (int i = 0; i < N; i++)
        {
            if (i + K < N)
            {
                P[i] = i + K + 1; // Shift by K (1-based index)
            }
            else
            {
                P[i] = i + K - N + 1; // Wrap around
            }
        }

        // Check if the generated permutation is valid
        bool isValid = true;
        for (int i = 0; i < N; i++)
        {
            if (P[i] % K == (i + 1) % K)
            { // P[i] mod K must not equal i+1 mod K
                isValid = false;
                break;
            }
        }

        if (isValid)
        {
            // Output the valid permutation
            for (int i = 0; i < N; i++)
            {
                cout << P[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl; // No valid permutation exists
        }
    }

    return 0;
}
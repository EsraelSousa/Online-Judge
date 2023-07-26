#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_even_numbers(int N, const vector<int>& sequence) {
    // Create a 2D vector to store the optimal solution for each subsequence
    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));

    // Fill the dp table
    for (int i = N - 1; i >= 0; i--) {
        for (int j = i + 1; j <= N; j++) {
            // Calculate the maximum even numbers if the first player chooses from the left end
            int pick_left = sequence[i] + min(dp[i + 2][j], dp[i + 1][j - 1]);

            // Calculate the maximum even numbers if the first player chooses from the right end
            int pick_right = sequence[j - 1] + min(dp[i + 1][j - 1], dp[i][j - 2]);

            // Store the maximum of the two choices in the dp table
            dp[i][j] = max(pick_left, pick_right);
        }
    }

    // The result will be the maximum number of even numbers the first player can get
    return dp[0][N];
}

int main() {
    while (true) {
        int N;
        cin >> N;
        if (N == 0) {
            break;
        }

        vector<int> sequence(2 * N);
        for (int i = 0; i < 2 * N; i++) {
            cin >> sequence[i];
        }

        int result = max_even_numbers(N, sequence);
        cout << result << endl;
    }

    return 0;
}

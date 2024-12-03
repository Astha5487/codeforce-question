#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<bool> visited(n, false);
        int total_swaps = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                int cycle_length = 0;
                int j = i;

                while (!visited[j]) {
                    visited[j] = true;
                    j = p[j] - 1; // Adjust for zero-based indexing
                    cycle_length++;
                }

                if (cycle_length >= 3) {
                    int swaps_needed = (cycle_length - 1) / 2;
                    total_swaps += swaps_needed;
                }
            }
        }

        cout << total_swaps << endl;
    }

    return 0;
}
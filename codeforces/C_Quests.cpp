#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<int> timesCompleted(n, 0);
        long long totalExperience = 0;

        for (int i = 0; i < n; ++i) {
            totalExperience += a[i]; // Experience points for the first completion
            timesCompleted[i]++; // Marking the first completion

            int remaining = k; // Remaining quests Monocarp can complete

            // Calculate additional experience points for subsequent completions
            while (remaining > 0 && timesCompleted[i] < b[i]) {
                totalExperience += a[i];
                timesCompleted[i]++;
                remaining--;
            }
        }

        cout << totalExperience << endl;
    }

    return 0;
}

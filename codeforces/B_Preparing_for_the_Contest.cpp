#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> order(n);
        for (int i = 0; i < n; ++i) {
            order[i] = i + 1;
        }

        if (k == 0) {
            for (int i = 0; i < n; ++i) {
                cout << order[i] << " ";
            }
        } else {
            int j = n - 1;
            while (k > 0) {
                cout << order[j--] << " ";
                k--;
            }
            for (int i = 0; i <= j; ++i) {
                cout << order[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

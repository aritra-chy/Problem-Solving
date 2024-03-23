#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(int n, vector<int>& a) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    int gcd = a[0];
    for (int i = 1; i < n; i++) {
        gcd = __gcd(gcd, a[i]);
    }
    if (total % n != 0 || gcd == 0) {
        return false;
    }
    int target = total / n;
    for (int i = 0; i < n; i++) {
        if (a[i] % gcd != 0) {
            return false;
        }
        a[i] -= gcd;
        a[(i + 1) % n] += gcd;
        if (all_of(a.begin(), a.end(), [&](int x) { return x == target; })) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (solve(n, a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t-- > 0) {
        int n;
        cin >> n; 

        for (char c1 = 'a'; c1 <= 'z'; c1++) {
            for (char c2 = 'a'; c2 <= 'z'; c2++) {
                for (char c3 = 'a'; c3 <= 'z'; c3++) {
                    int sum = c1 - 'a' + 1 + c2 - 'a' + 1 + c3 - 'a' + 1;
                    if (sum == n) {
                        cout << c1 << c2 << c3 << endl;
                        goto end; 
                    }
                }
            }
        }
        end:;
    }

    return 0;
}

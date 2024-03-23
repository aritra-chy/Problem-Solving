                                      /* Name  : ARITRA CHOWDHURY
                                         Date  : 17/02/2024 */

 #include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; 
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n; 
        cin >> n;

        vector<int> numbers(2 * n);
        for (int j = 0; j < 2 * n; ++j) {
            cin >> numbers[j]; 
        }

        sort(numbers.begin(), numbers.end(), greater<int>());

        int score = 0;

        for (int j = 0; j < n; ++j) {
            score += min(numbers[2*j], numbers[2*j+1]);
        }
        cout << score << endl;
    }

    return 0;
}
                                        

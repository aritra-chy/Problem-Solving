/*************************/
/* Name : ARITRA CHOWDHURY
   Date : 20/02/2024 */

#include <iostream>
#include <cmath>

using namespace std;

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            sum += sumDigits(j);
        }
        cout << sum << endl;
    }
    return 0;
}
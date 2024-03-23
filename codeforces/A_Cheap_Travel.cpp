/*************************/
/* Author : ARITRA CHOWDHURY
   Date : 27/02/2024 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int cost_individual = n * a;
    int cost_special = (n / m) * b + min((n % m) * a, b);

    cout << min(cost_individual, cost_special) << endl;

    return 0;
}
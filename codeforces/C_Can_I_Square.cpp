#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    long long t;
    cin >> t; 

    for (int i = 0; i<t; i++) {
        long long n;
        cin>>n;
        long long sideLength, totalSquares = 0;
        for (int j=0; j<n; j++) {
            long long squares;
            cin >> squares;
            totalSquares += squares;
        }
        sideLength = sqrt(totalSquares);
        if (sideLength*sideLength == totalSquares) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }
    return 0;
}

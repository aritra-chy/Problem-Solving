#include <iostream>
#include <vector>

using namespace std;

bool isTriangle(const vector<string>& grid, int n) {
    int mid = n / 2;
    for (int i = 0; i < mid; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i || j > n - i - 1) {
                if (grid[i][j] == '1') {
                    return false;
                }
            } else {
                if (grid[i][j] == '0') {
                    return false;
                }
            }
        }
    }
    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < mid; i++) {
            if (grid[i][j] == '1') {
                count++;
            }
        }
        if (count == mid || (j > 0 && j < n - 1 && count == mid - 1)) {
            return true;
        }
    }
    return false;
}

bool isSquare(const vector<string>& grid, int n) {
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
                count++;
            }
        }
        if (count != mid && count != mid + 1) {
            return false;
        }
    }
    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (grid[i][j] == '1') {
                count++;
            }
        }
        if (count != mid && count != mid + 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<string> grid(n);
        for (int j = 0; j < n; j++) {
            cin >> grid[j];
        }
        if (isTriangle(grid, n)) {
            cout << "TRIANGLE" << endl;
        } else {
            cout << "SQUARE" << endl;
        }
    }
    return 0;
}
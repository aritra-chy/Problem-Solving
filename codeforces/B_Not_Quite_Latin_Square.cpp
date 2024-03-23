#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    for (int i=0; i<t; i++) {
        char a[3][3];
        int qRow = -1, qCol = -1;

        for (int row = 0; row < 3; row++) {       
            for (int col = 0; col < 3; col++) {
                cin >> a[row][col];
                if (a[row][col] == '?') {
                    qRow = row;
                    qCol = col;
                }
            }
        }

        for (char ch = 'A'; ch <= 'C'; ch++) {        
            bool fRow = false, fCol = false;
            
            for (int col = 0; col < 3; col++) {
                if (a[qRow][col] == ch) {
                    fRow = true;
                    break;
                }
            }
            for (int row = 0; row < 3; row++) {
                if (a[row][qCol] == ch) {
                    fCol = true;
                    break;
                }
            }
            
            if (!fRow && !fCol) {
                cout << ch << endl; 
                break;
            }
        }
    }

    return 0;
}

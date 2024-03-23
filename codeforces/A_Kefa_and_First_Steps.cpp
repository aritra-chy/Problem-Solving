/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 02 March, 2024 
-----------------------------------------*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<int> a(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i]; 
    }

    int maxLength = 1; 
    int currentLength = 1; 

    for (int i = 1; i < n; ++i) 
    {
        if (a[i] >= a[i - 1]) 
        {
            currentLength++; 
            maxLength = max(maxLength, currentLength); 
        } 
        else 
        {
            currentLength = 1; 
        }
    }

    cout << maxLength << endl;

    return 0;
}

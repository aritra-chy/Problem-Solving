/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 06 March, 2024 
-----------------------------------------*/

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<cctype>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> a(n);

    // input array elements
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    // Find the minimum and maximum numbers
    int min_index = min_element(a.begin(), a.end()) - a.begin();
    int max_index = max_element(a.begin(), a.end()) - a.begin();

    // Swap the minimum and maximum numbers
    swap(a[min_index], a[max_index]);

    // Print the array after the replacement operation
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

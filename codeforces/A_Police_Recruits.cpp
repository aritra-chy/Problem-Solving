/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 11 March, 2024 
-----------------------------------------*/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <set>
#include <cctype>
#include <climits>
#define ll long long
using namespace std;

int main() 
{
    ll int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }

    int available_officers = 0;
    int untreated_crimes = 0;

    for (int i=0; i<n; i++) 
    {
        if (a[i] == -1) 
        {  
            if (available_officers > 0) 
            {
                available_officers--;
            } 
            else 
            {
                untreated_crimes++;
            }
        } 
        else 
        {  
            available_officers += a[i];
        }
    }
    cout << untreated_crimes << endl;

    return 0;
}

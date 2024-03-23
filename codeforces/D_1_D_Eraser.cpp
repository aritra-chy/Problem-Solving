/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 18 March,2024 | 20:28:13 
------------------------------------------------------*/
 
#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n, k;
        
        cin >> n >> k;
        string s;
        cin >> s;

        int operations = 0;
        int i = 0;
        while (i < n) 
        {
            if (s[i] == 'B') 
            {
                operations++;
                i += k;  
            } 
            else 
            {
                i++;  
            }
        }
        cout << operations << endl;
    }
    return 0;
}

 
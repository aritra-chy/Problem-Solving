/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 19 March,2024 | 21:18:53 
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
    int n;
    cin >> n;
    
    vector<int> points(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> points[i];
    }
    
    if (n <= 1) 
    {
        cout << "0" << endl;
        return 0;
    }
    
    int count = 0;
    int max = points[0];
    int min = points[0];
    
    for (int i = 1; i < n; ++i) 
    {
        if (points[i] > max) 
        {
            count++;
            max = points[i];
        } 
        else if (points[i] < min) 
        {
            count++;
            min = points[i];
        }
    }
    
    cout << count << endl;
    
    return 0;
}
 

/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 14 March,2024 | 11:55:48 
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

vector<int> getRoundNumbers(int n) 
{
    vector<int> roundNumbers;
    int power = 0;
    
    while (n > 0) 
    {
        int digit = n % 10;
        if (digit != 0) 
        {
            roundNumbers.push_back(digit * pow(10, power));
        }
        n /= 10;
        power++;
    }
    
    return roundNumbers;
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        
        vector<int> roundNumbers = getRoundNumbers(n);
        
        cout << roundNumbers.size() << endl;
        for (int i = 0; i < roundNumbers.size(); ++i) 
        {
            cout << roundNumbers[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
 
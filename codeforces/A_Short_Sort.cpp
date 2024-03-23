/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 22 March,2024 | 20:40:55 
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
        string s;
        cin >> s;

        string permutations[] = {"abc", "acb", "bac", "cba"};

        bool found = false;
        do {
            for (const std::string& perm : permutations) {
                if (s.find(perm) != std::string::npos) {
                    found = true;
                    break;
                }
            }
        } 
        while (!found && std::next_permutation(permutations, permutations + 4));

        if (found)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    
    return 0;

}
   
 
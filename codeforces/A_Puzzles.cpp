/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 15 March,2024 | 20:23:57 
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
   int n,m;
   cin>>n>>m;
   int v[m];
   for(int i=0; i<m; i++) 
   {
    cin>>v[i];
   }

   sort(v,v+m);
   int leastvalue = v[n-1]-v[0];
   for(int i=1; i<=m-n; i++)
   {
        if(v[i+n-1]-v[i]<leastvalue)
        {
            leastvalue = v[i+n-1]-v[i];
        }
   }
   cout<<leastvalue<<endl;
    return 0;
}
 

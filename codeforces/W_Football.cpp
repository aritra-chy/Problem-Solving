/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 13 March,2024 | 10:22:41 
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
    int a,b,c,d;
    cin>>a;
    c=1;
    d=0;
    string s1,s2,s3;
    cin>>s1;
    for(b=0; b<a-1; b++)
    {
        cin>>s2;
        if(s1==s2)
        {
            c=c+1;
        }
        else
        {
            s3=s2;
            d=d+1;
        }
    }
    if(c>d)
    {
        cout<<s1;
    }
    else
    {
        cout<<s3;
    }
    
    return 0;
}
 

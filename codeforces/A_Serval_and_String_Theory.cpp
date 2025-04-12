/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 22 March,2025 | 20:44:42 
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
#define nl "\n"
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define MOD 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
  fast;
  int t;
  cin>>t;

  while(t--)
  {
    int n,k;
    string s;
    cin>>n>>k>>s;
  
    string rev=s;
    reverse(rev.begin(),rev.end());
    if(s<rev)
    {
      cout<<"YES"<<nl;
      continue;
    }
  
    int count=0;
    for(int i=0; i<n/2; i++)
    {
      if(s[i]>s[n-i-1]) count++;
    }
    if(count<=k) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
  }

  return 0;
}
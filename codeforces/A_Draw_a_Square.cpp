/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 11 March,2025 | 20:40:04 
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
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define MOD 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
  fast;
  ll t;
  cin>>t;

  while (t--)
  {
    int l,r,d,u;
    cin>>l>>r>>d>>u;

    if (l==r && u==r && r==l && d==u) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}

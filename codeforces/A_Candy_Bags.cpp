/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 01 April,2025 
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
  int n;
  cin>>n;

  int x=1,y=n*n;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j+=2)
    {
        cout<<x++<<" "<<y--<<" ";
    }
    cout<<nl;
  }
  return 0;
}
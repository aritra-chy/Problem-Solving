/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 25 February,2025 | 10:17:35 
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
  string n;
  cin>>n;

  if(n.length() == 1) 
  {
    cout<<"0"<<endl;
    return 0;
  }

  int count = 0;
  while(n.length()>1)
  {
    ll sum=0;
    for(char digit:n)
    {
        sum += digit - '0';
    } 
    n = to_string(sum);
    count++;
  }
  cout<<count<<endl;

  return 0;
}
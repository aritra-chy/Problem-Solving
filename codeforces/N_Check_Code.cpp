/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 14 March,2024 | 12:00:53 
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
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    bool isvalid=true;

    if(s.length() != a+b+1)
    {
        isvalid=false;
    }
    else
    {
        if(s[a] != '-')
        {
            isvalid=false;
        }
        else
        {
            for(int i=0; i<s.length(); i++)
            {
                if(i != a && !isdigit(s[i]))
                {
                    isvalid=false;
                    break;
                }
            }
        }
    }

    if(isvalid)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
 
/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 17 March,2024 | 01:09:50 
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
    bool found=false;

    for(int i=a; i<=b; i++)
    {
        int num=i;
        bool lucky=true;
        while(num>0)
        {
            int digit= num%10;
            if(digit != 4 && digit != 7)
            {
                lucky = false;
                break;
            }
            else
            {
                lucky = true;
            }
            num=num/10;
        }
        if(lucky)
        {
            cout<<i<<" ";
            found = true;
       
        }
    }
    if(!found)
    {
        cout<<"-1";
        cout<<endl;
    }
        
    return 0;
}
 
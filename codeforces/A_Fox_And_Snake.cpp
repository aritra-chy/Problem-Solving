/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 10 March, 2024 
-----------------------------------------*/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <set>
#include <cctype>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<m; j++)
            {
                cout<<"#";
            }
        }
        else
        {
            if(i%4==1)
            {
                for(int j=0; j<m-1; j++)
                {
                    cout<<".";
                }
                cout<<"#";
            }
            else
            {
                cout<<"#";
                for(int j=0; j<m-1; j++)
                {
                    cout<<".";
                }
            }
        }
    cout<<endl;
    }
    return 0;
}
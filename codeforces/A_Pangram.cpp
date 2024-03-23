/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 03 March, 2024 
-----------------------------------------*/

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<cctype>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
   
    for(int i=0; i<n; i++)
    {
        s[i]=tolower(s[i]);
    }
    
    set<char>letters;
    
    for(int i=0; i<n; i++)
    {
        if(isalpha(s[i]))
        {
            letters.insert(s[i]);
        }
    }
    
    if(letters.size() == 26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
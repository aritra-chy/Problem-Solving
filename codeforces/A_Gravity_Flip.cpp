/*************************/
/* Author : ARITRA CHOWDHURY
   Date : 25/02/2024 */

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
        
    }
    return 0;
}
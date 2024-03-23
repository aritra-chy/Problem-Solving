/*************************/
/* Author : ARITRA CHOWDHURY
   Date : 29/02/2024 */

#include<bits/stdc++.h>    
#include<string>
#include<vector>
#define  ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    int even=0, odd=0, a,b;
    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
        {
            even++;
            a=i+1;
        }
        else
        {
            odd++;
            b=i+1;
        }
    }
    if(even>odd)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<a<<endl;
    }

    return 0;
}
/*************************/
/* Author : ARITRA CHOWDHURY
   Date : 28/02/2024 */

#include<bits/stdc++.h>    
#include<string>
#include<vector>
#define  ll long long
using namespace std;

int main()
{
    ll int t;
    cin>>t;
    int sum=0;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='T') 
        {
            sum += 4;
        }    
        else if(s[0]=='C') 
        {
            sum += 6;
        }
        else if(s[0]=='O') 
        {
            sum += 8;
        }
        else if(s[0]=='D') 
        {
            sum += 12;
        }
        else
        {
            sum += 20;
        }
    }
    cout<<sum<<endl;

    return 0;
}
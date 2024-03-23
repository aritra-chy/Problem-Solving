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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int min_sum = INT_MAX;
        for (int i = 0; i < n; ++i) 
        {
            for (int j = i + 1; j < n; ++j) 
            {
                int current_sum = a[i] + a[j] + j - i;
                min_sum = min(min_sum, current_sum);
            }
        }
        cout<<min_sum<<endl;
    }
    return 0;
}
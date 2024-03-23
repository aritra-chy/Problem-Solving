#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        string s;
        cin>>n>>s;
        int a[26]={0};
        for(int i=0; i<n; i++)
        {
            a[s[i]-65]++;
        }
        for(int i=0; i<26; i++)
        {
            if(a[i]>=i+1)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
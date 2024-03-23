                                      /* Name  : Aritra Chowdhury
                                         Date  : 15/02/2024 */
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int sum=0;
        for(int i=0; i<n-1; i++)
        {
            sum += (a[i+1]-a[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
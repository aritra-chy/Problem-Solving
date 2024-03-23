#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    long long int fac=1;
    while (t--)
    {
        int x;
        cin>>x;
        for(i=1; i<=x; i++)
        {
            fac=fac*i;
        }
        cout<<fac<<endl;
        fac=1;
    }
    return 0;
}
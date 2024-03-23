#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(1)
    {
        cin>>n>>m;
        if(n<=0 || m<=0)
        {
            break;
        }
        int a=min(n,m);
        int b=max(n,m);
        int sum=0;
        for(int i=a; i<=b; i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
    }
    return 0;
}
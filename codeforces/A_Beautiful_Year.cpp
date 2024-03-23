#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,r;
    cin>>n;
    int a,b,c,d;
    for(i=n; ; i++)
    {
        n++;
        r=n;
        a=r%10;
        r=r/10;

        b=r%10;
        r=r/10;

        c=r%10;
        r=r/10;

        d=r;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d )
        {
            cout<<d<<c<<b<<a<<endl;
            break;
        }

    }
    return 0;
}

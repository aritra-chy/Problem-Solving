#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,temp;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            temp=b-(a%b);
            cout<<temp<<endl;
        }
    }
    return 0;
}
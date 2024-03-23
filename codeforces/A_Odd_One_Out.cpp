#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int temp;
        if(a==b) {
            temp=c;
        }
        else if (a==c) {
            temp=b;
        }
        else {
            temp=a;
        }
        cout<<temp<<endl;
    }
    return 0;
}

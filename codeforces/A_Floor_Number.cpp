#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<=2)
        {
            cout<<"1"<<endl;

        }
        else 
        {
            x=a-2;
            if(x%b==0)
            {
                y=x/b;
            }
            else
            {
                y=x/b+1;
            }
            cout<<y+1<<endl;
        }
    }
    return 0;
}

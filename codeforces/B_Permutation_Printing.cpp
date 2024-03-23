                                      /* Name  : ARITRA CHOWDHURY
                                         Date  : 17/02/2024 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        if(n==3)
        {
            cout<<"1 2 3"<<endl;
        }
        else 
        {
            cout<<n<<" ";
            for(int i=1; i<=n-1; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
/*************************/
/* Name : ARITRA CHOWDHURY
   Date : 18/02/2024 */

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        
        if(n<=6) cout<<"NO"<<endl;
        else if(n==9) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(n%3==0)
            {
                cout<<1<<" "<<4<<" "<<n-5<<endl;
            }
            else 
            {
                cout<<1<<" "<<2<<" "<<n-3<<endl;
            }
        }
    }
    return 0;
}

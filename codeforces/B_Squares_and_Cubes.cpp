#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        set<int>count;
        for(i=1; i*i<=n; i++)
        {
            count.insert(i*i);
        }

        for(i=1; i*i*i<=n; i++)
        {
            count.insert(i*i*i);
        }

        cout<<count.size()<<endl;
    }
     

    return 0;
}
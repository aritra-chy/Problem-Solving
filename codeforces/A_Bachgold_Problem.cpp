#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum;
    cin>>n;
    sum=n/2;
    if(n%2==0)
    {
        cout<<sum<<endl;
        for(i=1; i<=sum; i++)
        {
            cout<< 2 <<" ";
        }
    }
    else
    {
        cout << sum << endl;
        for (int i = 1; i < sum; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }
 
    cout << endl; 
}
       

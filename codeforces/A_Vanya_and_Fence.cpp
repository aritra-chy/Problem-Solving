#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,i;
    cin>>n>>h;
    int arr[n],sum1=0,sum2=0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<=h)
        {
            sum1++;
        }
        else
        {
            sum2+=2;
        }
    }
    cout<<sum1+sum2<<endl;
    return 0;
}
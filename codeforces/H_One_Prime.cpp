#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,flag=0;
    cin>>n;
    int sum=n/2;
    for(int i=2; i<=sum; i++)
    {
        if(n%i==0){
            cout<< "NO" <<endl;
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
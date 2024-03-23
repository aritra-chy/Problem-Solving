#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
   
    for(i=1; i<=12; i++){
        sum=n*i;
        cout<<n<<" * "<<i<<" = "<<sum<<endl;
    }
    
    return 0;
}
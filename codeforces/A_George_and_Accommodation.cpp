#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum,count=0;
    int p[100],q[100];
    cin>>n;
    for(i=0; i<n; i++){
        cin>>p[i]>>q[i];
        sum=q[i]-p[i];
        if(sum>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
    
}
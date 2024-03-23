#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    int x[100];
    for(i=0; i<n; i++){
        cin>>x[i];   
    }
    for(i=0; i<n; i++)
    {
        if(x[i] == 1)
        {
            sum++;
            break;
        }
    }
    if(sum == 1)
    {
        cout<<"HARD"<<endl;
    }
    else {
        cout<<"EASY"<<endl;
    }
    return 0;
}
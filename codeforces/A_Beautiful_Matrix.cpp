#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    for(int i=0; i<5; i++) //matrix input
    {
        for(int j=0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }
    int n,r,c;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(a[i][j] == 1)
            {
                r=i; //row 
                c=j; //column
            }
        }
    }
    n= abs(r-2) + abs(c-2);
    cout<<n<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum1=a+b*c;
    int sum2=a*(b+c);
    int sum3=a*b*c;
    int sum4=(a+b)*c;

    int temp= max(max(sum1,sum2), max(sum3,sum4));

    cout<<temp<<endl;

}
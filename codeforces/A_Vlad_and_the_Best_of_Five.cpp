/*************************/
/* Name : ARITRA CHOWDHURY
   Date : 18/02/2024 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int countA=0;
        int countB=0;

        for(char i=0; i<s.size(); i++)
        {
            if(s[i]=='A') countA++;
            else countB++;  
        }

        if(countA>countB)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
    return 0;
}
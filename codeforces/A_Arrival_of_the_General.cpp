#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int maxpos=0;
    int minpos=0;

    for(int i=0; i<n; i++)
    {
        if(v[i]>v[maxpos])
        {
            maxpos = i;
        }
        if(v[i]<=v[minpos])
        {
            minpos=i;
        }
    }
    int minpos2 = maxpos+ (n - minpos- 1);
    if (minpos < maxpos) {
        minpos2--;
    }

    cout << minpos2 << endl;

    return 0;

}
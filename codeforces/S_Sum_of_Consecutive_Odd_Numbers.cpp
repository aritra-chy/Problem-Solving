/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 09 March, 2024 
-----------------------------------------*/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <cctype>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) 
    {
        int x, y;
        cin >> x >> y;

        if (x > y) 
        {
            swap(x, y);
        }

        int odd_sum = 0;

        for (int num = x + 1; num < y; num++) 
        {
            if (num % 2 != 0) 
            {  
                odd_sum += num;  
            }
        }
        cout << odd_sum << endl;
    }

    return 0;
}
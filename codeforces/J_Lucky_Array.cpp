/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 10 March, 2024 
-----------------------------------------*/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <set>
#include <cctype>
#include <climits>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;

    unordered_map<int, int> frequency;
    int min_element = INT_MAX;

    for (int i = 0; i < n; i++) 
    {
        int num;
        cin >> num;
        frequency[num]++;

        if (num < min_element) 
        {
            min_element = num;
        }
    }

    if (frequency[min_element] % 2 == 1) 
    {
        cout << "Lucky" << endl;
    } 
    else 
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}



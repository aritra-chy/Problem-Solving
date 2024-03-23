/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 12 March, 2024 
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
    ll int n, m;
    cin >> n >> m;

    vector<int> tasks(m);
    for (int i = 0; i < m; ++i) 
    {
        cin >> tasks[i];
    }

    ll int current_house = 1;
    ll int total_time = 0;

    for (int i = 0; i < m; ++i) 
    {
        if (tasks[i] >= current_house) 
        {
            total_time += tasks[i] - current_house;
        } 
        else 
        {
            total_time += n - current_house + tasks[i];
        }
        current_house = tasks[i];
    }

    cout << total_time << endl;

    return 0;
}


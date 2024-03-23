/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 08 March, 2024 
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
    string s;
    getline(cin, s);

    set<char> a;

    for (int i = 1; i < s.size() - 1; i++) {
        if (s[i] != ',' && s[i] != ' ') {
            a.insert(s[i]);
        }
    }

    cout << a.size() << endl;

    return 0;
}


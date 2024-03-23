/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 01 March, 2024 
-----------------------------------------*/

#include <bits/stdc++.h>
#include<vector>
#include <string>
#define ll long long;
using namespace std;

int main() 
{
    int n;
    cin >> n;

    string digits;
    cin >> digits;
    int summation = 0;

    for (char digit : digits) 
    {
        summation += digit - '0';
    }

    cout << summation << endl;

    return 0;
}
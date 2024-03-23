/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 04 March, 2024 
-----------------------------------------*/

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<cctype>
#define ll long long
using namespace std;

int main() 
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) 
    {
        cin >> A[i];
    }

    bool isPalindrome = true;
    for (int i = 0; i < N / 2; ++i) 
    {
        if (A[i] != A[N - i - 1]) 
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}


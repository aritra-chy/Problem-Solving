/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 03 March, 2024 
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
    int N, A, B;
    cin >> N >> A >> B;

    int totalSum = 0;

    for (int num = 1; num <= N; ++num) 
    {
        int currentNum = num;
        int sumOfDigits = 0;

        while (currentNum > 0) 
        {
            sumOfDigits += currentNum % 10;
            currentNum /= 10;
        }

        if (A <= sumOfDigits && sumOfDigits <= B) 
        {
            totalSum += num;
        }
    }

    cout << totalSum << endl;

    return 0;
}

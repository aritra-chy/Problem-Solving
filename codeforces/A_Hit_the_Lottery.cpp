/*-----------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 07 March, 2024 
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
    int n;
    cin>>n;
    int count=0;

    count += n / 100; 
    n %= 100;
    count += n / 20;   
    n %= 20;
    count += n / 10;   
    n %= 10;
    count += n / 5;    
    n %= 5;
    count += n;   

    cout<<count<<endl;
}
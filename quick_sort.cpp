/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 26 May,2024 | 22:45:43 
------------------------------------------------------*/
 
#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int partition(int a[],int p,int r)
{
    int x = a[r];
    int i = p;
    for(int j = p; j < r-1; j++)
    {
        if(a[j] <= x)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i],a[r]);
    return i;
}

void quickSort(int a[],int p,int r)
{
    if(p < r)
    {
        int q = partition(a,p,r);
        quickSort(a,p,q-1);
        quickSort(a,q+1,r);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a,0,n-1);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
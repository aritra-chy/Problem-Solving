/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 03 June,2024 | 21:47:23 
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

void merge(vector<int>&a, int low, int mid, int high)
{
    vector<int>temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high)
    {
        if(a[left]<=a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
        {
            temp.push_back(a[right]);
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }

    while(right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }

    for(int i=low; i<=high; i++)
    {
        a[i] = temp[i-low];
    }
}

void mergeSort(vector<int>&a, int low, int high)
{
    if(low >= high) return;

    int mid = (low+high)/2;
    mergeSort(a,low, mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
}

int main()
{
    int n;
    cin>>n;

    vector<int>a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    mergeSort(a,0,n-1);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
}

/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 26 May,2024 | 23:43:28 
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

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> obj(n);
    vector<int> profit(n);
    vector<int> weight(n);
    vector<pair<float, int>> profit_per_kg;

    for (int i = 0; i < n; i++) {
        cin >> obj[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> profit[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    for (int i = 0; i < n; i++) {
        profit_per_kg.push_back({(float)profit[i] / weight[i], i});
    }
    sort(profit_per_kg.begin(), profit_per_kg.end(), greater<pair<float, int>>());

    float total_profit = 0;
    int remaining_weight = w;
    vector<int> used_items;

    for (int i = 0; i < n; i++) {
        int idx = profit_per_kg[i].second;
        if (remaining_weight > 0 && weight[idx] <= remaining_weight) {
            remaining_weight -= weight[idx];
            total_profit += profit[idx];
            used_items.push_back(idx);
        } else {
            if (remaining_weight > 0) {
                total_profit += profit_per_kg[i].first * remaining_weight;
                used_items.push_back(idx);
                remaining_weight = 0;
            }
            break;
        }
    }

    cout << fixed << setprecision(2) << total_profit << endl;


    cout << "Indices of used items: ";
    for (int i = 0; i < used_items.size(); i++) {
        cout << used_items[i] << " ";
    }
    cout << endl;

    return 0;
}
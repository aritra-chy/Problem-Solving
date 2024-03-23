#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;

    
    int min_value;
    int min_index;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        if (i == 1 || a < min_value) 
        {
            min_value = a; 
            min_index = i; 
        }
    }
    cout<< min_value <<" "<<min_index<<endl;
    
    return 0;
}

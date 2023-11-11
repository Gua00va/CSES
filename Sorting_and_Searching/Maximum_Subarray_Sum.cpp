#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    long long maxi = LONG_MIN;
    long long curr = 0;

    for(int i=0; i<n; i++) {
        curr += v[i];
        maxi = max(curr, maxi);
        if(curr < 0) curr = 0;
    }

    cout << maxi;
}
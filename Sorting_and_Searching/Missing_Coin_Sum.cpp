#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int v[n];

    for(int i=0; i<n; i++) cin >> v[i];
    sort(v, v + n);

    ll res = 1;
    for(int i=0; i<n && v[i] <= res; i++) {
        res += v[i];
    }

    cout << res;
}
#include<iostream>

using namespace std;
typedef long long ll;

ll find_diag(ll n) {
    if(n == 1) return 1;

    return 1 + (n-1) * n;
}

ll f(ll r, ll c) {
    if(r > c) {
        ll d = find_diag(r);
        ll diff = r-c;

        if(r%2) return d - diff;
        return d + diff;
    } else {
        ll d = find_diag(c);
        ll diff = c-r;

        if(c%2) return d + diff;
        return d - diff;
    }

    return -1;
}

int main() {
    ll t;
    cin >> t;

    while(t--) {
        ll r, c;
        cin>>r>>c;

        cout<<f(r, c)<<" ";
    }
}

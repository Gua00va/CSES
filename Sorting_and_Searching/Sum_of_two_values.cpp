#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.begin(), v.end());
    int l = 0, r = n-1;
    int L = -1, R = -1;
    while(l < r) {
        int sum = v[l].first + v[r].first;

        if(sum == x) {
            L = v[l].second;
            R = v[r].second;

            break;
        }

        if(sum > x) r--;
        else l++;
    }

    if(L == -1 || R == -1) cout << "IMPOSSIBLE";
    else cout << L << " " << R;
}
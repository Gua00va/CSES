#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

static bool cmp(pair<int, int>& a, pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for(int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), cmp);

    int end = v[0].second;
    int ans = 1;

    for(int i=1; i<n; i++) {
        if(end > v[i].first) continue;
        end = v[i].second;
        ans++;
    }

    cout << ans;
}
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> ch(n);
    for(int i=0; i<n; i++) cin >> ch[i];
    sort(ch.begin(), ch.end());

    int l = 0, r = n-1, ans = 0;

    while(l <= r) {
        if(l == r) {
            ans++;
            l++;
            r--;
        }
        else if(ch[r] + ch[l] > x) {
            ans++;
            r--;
        } else {
            ans++;
            l++;
            r--;
        }
    }

    cout << ans;
}
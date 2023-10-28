#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void f() {
    int n;
    cin >> n;

    vector<int> arr(n), dep(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        cin >> dep[i];
    }

    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int l = 0, r = 0;
    int curr = 0, ans = 0;

    while(l < n && r < n) {
        if(arr[l] == dep[r]) {
            r++;
            l++;
        }
        else if(arr[l] < dep[r]) {
            curr++;
            l++;
        } else if(arr[l] > dep[r]) {
            curr--;
            r++;
        }

        ans = max(ans, curr);
    }

    if(l < n) curr += n - l;
    ans = max(ans, curr);

    cout << ans;    
}

int main() {
    f();
}
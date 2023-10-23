#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int
typedef long long ll;

ll ans = LONG_MAX; 
ll sum = 0;

void f(int idx, vector<int>& nums, ll s) {
    if(idx >= nums.size()) {
        if(s != sum) ans = min(ans, abs(sum - 2*s));
        return;
    }

    f(idx+1, nums, s);
    f(idx+1, nums, s + nums[idx]);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++) {
        cin >> nums[i];
        sum += nums[i];
    }

    f(0, nums, 0);

    cout << ans;
}
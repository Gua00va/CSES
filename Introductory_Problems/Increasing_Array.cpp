#include<iostream>

using namespace std;

long long f(int* nums, int n) {
    long long res = 0;
    int curr_m = nums[0];
    
    for(int i=1; i<n; i++) {
        if(nums[i] >= curr_m) curr_m = nums[i];
        res += curr_m - nums[i];
        // curr_m = nums[i];
    }

    return res;
}

int main() {
    int n;
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++) cin>>nums[i];
    cout<<f(nums, n);
}
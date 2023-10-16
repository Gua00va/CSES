#include<iostream>
#include<vector>
using namespace std;

// TODO

vector<int> f(vector<int>& nums, int n) {
    int mid = n/2;
    int l = 0;
    int r = n-1;

    vector<int> x(n, -1); 
    int a_l = mid-1, a_r = mid+1;

    bool flag = true;
    x[mid] = nums[mid];

    while(a_l >= 0 && a_r < n && l < r) {
        if(flag) {
            x[a_l--] = nums[l++];
            x[a_r++] = nums[r--];
        } else {
            x[a_r++] = nums[l++];
            x[a_l--] = nums[r--];
        }

        flag = !flag;
    }

    return x;
}

int main() {
    int n;
    cin >> n;
    
    if(n == 1) {
        cout<<"1";
        return 0;
    }

    if(n == 2 || n == 3) {
        cout<<"NO SOLUTION";
        return 0;
    }

    vector<int> nums(n);
    for(int i=0; i<n; i++) cin >> nums[i];

    vector<int> x = f(nums, n); 

    for(int i=0; i<n; i++) cout<<x[i]<<" ";
}
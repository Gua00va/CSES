#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int xr = 0;

    for(int i=0; i<n-1; i++) {
        int a;
        cin>>a;
        xr ^= a;
        xr ^= (i+1);
    }

    xr ^= n;

    cout<<xr;
}
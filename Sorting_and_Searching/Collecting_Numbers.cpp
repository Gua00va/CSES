#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> v[n];

    for(int i=0; i<n; i++) {
        int a;
        cin >> a;

        v[i] = make_pair(a, i);
    }

    sort(v, v + n);
    int rnds = 1;

    for(int i=1; i<n; i++) {
        if(v[i].second < v[i-1].second) rnds++;
    }

    cout << rnds;
}
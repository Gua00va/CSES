#include<iostream>
#include<set>
using namespace std;

void f() {
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;

    for(int i=0; i<n; i++) {
        int h;
        cin >> h;
        tickets.insert(h);
    }

    for(int i=0; i<m; i++) {
        int t;
        cin >> t;

        auto it = tickets.upper_bound(t);

        if(it == tickets.begin()) cout << - 1 <<"\n";
        else {
            cout << *(--it) << "\n";
            tickets.erase(it);
        }
    }
}
 
int main() {
    f();
}
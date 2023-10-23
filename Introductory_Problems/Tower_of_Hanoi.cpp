#include<iostream>
#include<vector>
using namespace std;

int cnt = 0; 
vector<int> fr;
vector<int> t;

void f(int n, int from, int to, int aux) {
    if(n == 0) return;
    f(n-1, from, aux, to);
    cnt++;
    fr.push_back(from);
    t.push_back(to);
    f(n-1, aux, to, from);
}

int main() {
    int n;
    cin >> n;

    f(n, 1, 3, 2);
    cout<<cnt<<endl;
    for(int i=0; i<fr.size(); i++) {
        cout<<fr[i]<<" "<<t[i]<<endl;
    }
}
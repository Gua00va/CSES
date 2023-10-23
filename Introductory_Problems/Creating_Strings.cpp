#include<iostream>
#include<set>

using namespace std;

set<string> st;

void f(int idx, string& s) {
    if(idx < 0) {
        st.insert(s);
        return;
    }

    for(int i=idx; i < s.size(); i++) {
        swap(s[i], s[idx]);
        f(idx-1, s);
        swap(s[i], s[idx]);
    }
}

int main() {
    string s;
    cin >> s;
    int n = s.size();

    f(n-1, s);
    cout<<st.size()<<endl;

    for(auto it: st) {
        cout<<it<<endl;
    }
}
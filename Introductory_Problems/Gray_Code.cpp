#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> ans;
    ans.push_back("");
    for(int i=0; i<n; i++) {
        int size = ans.size();
        for(int j=size-1; j>=0; j--) {
            ans.push_back(ans[j]);
        }

        size *= 2;

        for(int j=0; j<size; j++) {
            if(j < size/2) {
                ans[j] += "0";
            } else ans[j] += "1";
        }
    }

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<endl;
    }
}
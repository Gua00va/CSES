#include<iostream> 
#include<climits>

using namespace std;

int f(string s) {
    char curr_c = s[0];
    int n = s.size();
    int curr_l = 1;
    int max_l = INT_MIN;
    
    for(int i=1; i<n; i++) {
        if(curr_c == s[i]) curr_l++;
        else {
            max_l = max(max_l, curr_l);
            curr_c = s[i];
            curr_l = 1;
        }
    }
    max_l = max(max_l, curr_l);
    return max_l;
}


int main() {
    string s;
    cin >>s;

    cout<<f(s);
}
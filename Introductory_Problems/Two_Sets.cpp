#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = (n * (n + 1)) / 2;

    if(sum % 2) {
        cout<<"NO";
        return 0;
    }

    vector<int> v1;
    vector<int> v2;
    int s1 = 0, s2 = 0;

    if(n%2) {
        s1 = 3;
        s2 = 3;
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);

        int l = 4, r = n;

        int flag = true;
        while(r <= n && l <= n && l < r) {
            if(flag) {
                s1 += l + r;
                v1.push_back(l++);
                v1.push_back(r--);
            } else {
                s2 += l + r;
                v2.push_back(l++);
                v2.push_back(r--);
            }
            
            flag = !flag;
        }
    } else {
        int l = 1, r = n;
        // r = n;

        bool flag = true;
        while(r <= n && l <= n && l < r) {
            if(flag) {
                s1 += l + r;
                v1.push_back(l++);
                v1.push_back(r--);
            } else {
                s2 += l + r;
                v2.push_back(l++);
                v2.push_back(r--);
            }
            
            flag = !flag;
        }
    }

    cout<<"YES\n";
    cout<<v1.size()<<"\n";
    for(int i=0; i<v1.size(); i++) cout<<v1[i]<<" ";

    cout<<"\n"<<v2.size()<<"\n";
    for(int i=0; i<v2.size(); i++) cout<<v2[i]<<" ";
}
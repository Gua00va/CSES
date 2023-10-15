#include<iostream>

using namespace std;


void f(long long n) {
    cout<<n<<" "; 

    while(n != 1) {
        if(n % 2) n = 3 * n + 1;
        else n /= 2;
        cout<<n<<" "; 
    }
}

int main() {
    long long n;
    cin >> n;
    f(n);
}
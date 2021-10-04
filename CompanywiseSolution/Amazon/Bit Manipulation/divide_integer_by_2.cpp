#include <bits/stdc++.h>
using namespace std;

int divide2int(int n) {
    if (n == 0) {
        return 0;
    }

    int x = n >> 1;
    return x;
}

int main() {
    int n;
    cin>>n;
    cout<<divide2int(n);
    return 0;
}
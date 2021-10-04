#include <bits/stdc++.h>
using namespace std;

int copysetbits(int x, int y, int l, int r) {
    if (1 < l || r > 32) {
        return false;
    }

    for (int i = l; i <= r; i++) {
        int mask = 1 << (i - 1);

        if (y & mask) {
            x = x | mask;
        }
    }
    return x;
}

int main () {
    int x, y, l, r;
    cin>>x>>y>>l>>r;
    cout<<copysetbits(x,y,l,r);
    return 0;
}
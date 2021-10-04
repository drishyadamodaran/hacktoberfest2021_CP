#include <bits/stdc++.h>
using namespace std;

int flipped(int a, int b) {
    int ans = a ^ b;
    int count = 0;
    while (ans) {
        ans = ans & (ans - 1);
        count++;
    }
    return count;
}

int main () {
    int a,b;
    cin>>a>>b;

    cout<<flipped(a , b);
}
#include <bits/stdc++.h>
using namespace std; 

int countsetbitsutil(int x) {
    if ( x <= 0) {
        return 0;
    }
    return (x % 2 == 0 ? 0 : 1) + countsetbitsutil(x / 2);
}

int numberofones(int n) {
    int count = 0;
    for (int i = 0; i <= n; i++) {
        count += countsetbitsutil(i);
    }
    return count;
}
  
int main() {
    int n;
    cin>>n;

    cout<<numberofones(n);
    return 0;
}
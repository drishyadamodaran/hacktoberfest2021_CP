/* Problem Statement - Given a two integers say a and b. Find the quotient after dividing a by b without using multiplication, division and mod operator.

Examples - Input : a = 10, b = 3
Output : 3

Input : a = 43, b = -8
Output :  -5 
*/

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

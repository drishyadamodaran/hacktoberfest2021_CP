/* Problem Statement - You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

Examples - Input: N = 4
Output: 5
Explanation:
For numbers from 1 to 4.
For 1: 0 0 1 = 1 set bits
For 2: 0 1 0 = 1 set bits
For 3: 0 1 1 = 2 set bits
For 4: 1 0 0 = 1 set bits
Therefore, the total set bits is 5.


Input: N = 17
Output: 35
Explanation: From numbers 1 to 17(both inclusive), 
the total number of set bits is 35.
*/


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

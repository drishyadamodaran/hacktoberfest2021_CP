/* Problem-Statement - Given a positive integer N, print count of set bits in it. 

Examples - Input: N = 6
Output: 2
Explanation:
Binary representation is '110' 
So the count of the set bit is 2.

Input: 8
Output: 1
Explanation:
Binary representation is '1000' 
So the count of the set bit is 1.
*/


#include <bits/stdc++.h>
using namespace std; 

int numberofones(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}
   
int main() {
    int n;
    cin>>n;

    cout<<numberofones(n)<<endl;
    return 0;
}

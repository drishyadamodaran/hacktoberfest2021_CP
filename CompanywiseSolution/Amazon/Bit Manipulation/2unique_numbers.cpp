// Problem Statement - Given an array in which all numbers except two are repeated once. 
// (i.e. we have 2n+2 numbers and n numbers are occurring twice and remaining two have occurred once). Find those two numbers in the most efficient way.  

/* Examples - 
Input: = 2
arr[] = {1, 2, 3, 2, 1, 4}
Output:
3 4 
Explanation:
3 and 4 occur exactly once. 

Input:
N = 1
arr[] = {2, 1, 3, 2}
Output:
1 3
Explanation:
1 3 occur exactly once.
*/

#include <bits/stdc++.h>
using namespace std; 

int setBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}
void uniquenumber(int arr[], int n) {
    int xorsum = 0;
    for (int i = 0; i < n; i++) {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1) {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++) {
        if (setBit(arr[i], pos - 1)) {
            newxor = newxor ^ arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor ^ newxor)<<endl;
}
   
int main() {
    int arr[] = {1,2,3,3,2,1,5,7};

    uniquenumber(arr,8);
    return 0;
}

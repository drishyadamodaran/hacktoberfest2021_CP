/* Given an array of integers, every element appears thrice except for one which occurs once.

Find that element which does not appear thrice.


Example Input 1:  A = [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
Example Output 1: 4
Explanation:
    4 occur exactly once
Example Input 2: A = [0, 0, 0, 1]
Example Output 2: 1
*/



#include <bits/stdc++.h>
using namespace std; 

int getBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos) {
    return (n | (1 << pos));
}
int uniquenumber(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < 64; i++) {
        int sum  = 0;
        for (int j  = 0; j < n; j++) {
            if (getBit(arr[j], i)) {
                sum++;
            }
        }
        if (sum % 3 != 0) {
            result = setBit(result, i);
        }
    }
    return result;
}
   
int main() {
    int arr[] = {1,2,3,4,1,2,3,1,2,3};

    cout<<uniquenumber(arr,10)<<endl;
    return 0;
}

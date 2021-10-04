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

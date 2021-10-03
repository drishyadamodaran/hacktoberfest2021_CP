#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int rem;
    while(n>0){
        rem=n%2;
        v.push_back(rem);
        n=n/2;
    }
    reverse(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}


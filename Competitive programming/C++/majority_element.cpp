#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int count;
vector<int> v;
for(int i=0;i<n-1;i++){
    count=1;
    for(int j=i+1;j<n;j++){
        if(arr[j]==arr[i]){
            count++;
        }
    }
    v.push_back(count);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}



}

// Approach --- using min heap

#include<bits/stdc++.h>
using namespace std;

int kthlargest(vector<int>v ,int k){
  
  priority_queue<int,vector<int>,greater<int>> minh;
  for(int i=0;i<v.size();i++){
        minh.push(v[i]);
        if(minh.size()>k)
        { 
          minh.pop();
        }
    }
   return minh.top();
}

int main(){
  
  vector<int>v;
    int k= 2 , ans;
    
    v.push_back(6);
    v.push_back(5);
    v.push_back(3);
    v.push_back(2);
    v.push_back(8);
    v.push_back(10);
  
ans= kthlargest(v,k);
  cout<<ans;
  
  return 0;
}

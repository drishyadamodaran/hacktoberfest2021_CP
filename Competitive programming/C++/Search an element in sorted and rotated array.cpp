#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}


// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> vec, int k) {
    //code here - rahul
    int low=0, mid;
    int high=vec.size()-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(vec[mid]==k)
            return mid;
        if(vec[low]<=vec[mid])
        {
            if(k<vec[mid]&& k>=vec[low])
            { high=mid-1; }
            else
            { low=mid+1; }
            
        }
        else
        {
            if(k>vec[mid]&& k<=vec[high])
            { low=mid+1; }
            else
            { high=mid-1; }
        }
        
    }
    return -1;
}

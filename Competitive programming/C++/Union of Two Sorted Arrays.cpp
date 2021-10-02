#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here - rahul
        //return vector with correct order of elements
        vector <int> vec;
        int arr3[n+m];
        for(int i=0 ; i<n ; i++ )
            arr3[i]=arr1[i];
        for(int i=0 ; i<m ; i++)
            arr3[n+i]=arr2[i];
        sort(arr3,arr3+(n+m));
        for(int i=0 ; i<n+m ; i++)
        {
            if(arr3[i]!=arr3[i+1])
                vec.push_back(arr3[i]);
        }
        return vec;
    }
};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends

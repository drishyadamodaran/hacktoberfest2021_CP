// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    
	  
	  
	 int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    bool dp[n + 1][sum + 1];
 
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
 
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            
 
            if (arr[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i-1][j];
                else
                dp[i][j] = dp[i - 1][j];
        }
    }
          
	 
	 
	 int mn=INT_MAX;
	 for(int z=0;z<(sum/2)+1;z++)
	 {
	     if(dp[n][z]==true)
	    mn=min(mn,sum-2*z);
	 }
	 return mn;


    
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
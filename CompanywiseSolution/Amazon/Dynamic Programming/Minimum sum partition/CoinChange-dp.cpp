/*Given a value N, find the number of ways to make change for N cents, if we have infinite supply of each of S = { S1, S2, .. , SM } valued coins.


Example 1:

Input:
n = 4 , m = 3
S[] = {1,2,3}
Output: 4
Explanation: Four Possible ways are:
{1,1,1,1},{1,1,2},{2,2},{1,3}.*/

#include <bits/stdc++.h>

using namespace std;
long long int count(int S[], int m, int n) {

       
        
        long long t[m+1][n+1];
        
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0)
                t[i][j]=0;
                if(j==0)
                t[i][j]=1;
            }
        }
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(S[i-1]<=j){
                    t[i][j]=t[i][j-S[i-1]]+t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[m][n];
    }

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[m];
        for(int i=0;i<m;i++)
        cin>>arr[i];
        
        long long ans=count(arr,m,n);
        cout<<ans<<endl;
    }

    return 0;
}

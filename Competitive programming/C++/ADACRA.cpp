// The problem link is https://www.codechef.com/problems/ADACRA
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int count_u = 0, count_d = 0;
	    string S;
	    cin >> S;
	    for(int i = 1; i < S.length(); i++){
	        if(S[i]!=S[i+1]){
	            if(S[i]=='U'){
	                count_u += 1;
	            }
	            else{
	                count_d += 1;
	            }
	        }
	    }
	    if(S[0] == 'U'){
	        count_u += 1;
	    }
	    else{
	        count_d += 1;
	    }
	    int ans = min(count_d, count_u);
	    cout << ans << "\n";
	}
	return 0;
}

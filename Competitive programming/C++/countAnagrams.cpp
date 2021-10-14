#include <bits/stdc++.h>
using namespace std;


long long countAnagrams(string s, string ana){
    unordered_map<char, int> m;
    for(auto it : ana) m[it]++;

    int k=ana.length();
    int count=m.size();
    
    int i=0, j=0;
    long long ans=0;
    
    while(j<s.length()){
    
        if(m.find(s[j])!=m.end()){
            m[s[j]]--;
            if(m[s[j]]==0) count--;
        }
        
        if((j-i+1)<k) j++;
        
        else if((j-i+1)==k){

            if(count==0) ans++;

            if(m.find(s[i])!=m.end()){
                m[s[i]]++;
                if(m[s[i]]==1) count++;
            }

            i++;
            j++;
        }
    }
    return ans;
}
    

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s, txt;
	    cin>>s>>txt;
	    long long ans = countAnagrams(s, txt);
	    cout<<ans<<endl;
	}
	return 0;
}

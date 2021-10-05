//link to problem->https://codeforces.com/contest/1560/problem/B
//Who's opposite
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int s=2*(abs(a-b));
		if(a<=s && b<=s && c<=s){
			if((s/2+c)>s){
				cout<<c-s/2<<endl;
			}
			else{
				cout<<s/2+c<<endl;
			}
		}
		else{
			cout<<"-1"<<endl;
		}
	}
}
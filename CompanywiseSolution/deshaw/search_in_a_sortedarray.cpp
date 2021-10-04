#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<vector>
#include<stdlib.h>
using namespace std;
#define pb push_back
#define fz(i,a,b) for(ll i=a; i<b; i++)
#define bz(i,a,b) for(ll i=a-1; i>=b; i--)
#define debug(x) cout << #x << " " << x << endl;
typedef long long int ll;
typedef long double lld;
 
/*#define debug(x);
printf(x);*/
 
void init()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt" , "r"  ,stdin); 
  freopen("output.txt" , "w" ,stdout);
  #endif
 
}
 
void  debugger()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt" , "r"  ,stdin); 
  freopen("output.txt" , "w" ,stdout);
  #endif
  #ifdef debugger
  #define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
  #else
  #define debugger(x);
  #endif
} 
 
 
const int MAXN = (int)((1e5) + 100);
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
 
 
void precision(int a) 
{
  cout << setprecision(a) << fixed;
}
 
 
//** pritishcf307 **//
//**------------------------------------------------------------------------------------------------------**//



int main()
{
  init();

ll n;
cin >> n;
ll x;
cin >> x;
bool found=false;
vector<int> v;
for(int i=0;i<n;i++)
{
  ll a;
  cin >> a;
  v.push_back(a);
}

ll lo=0;
ll hi=n-1;
ll mid,ans;
 
while(hi-lo >= 0)
{
  mid=(lo+hi)/2;
  if(v[mid]==x)
  {
    found=true;
    ans=mid;
    break;
  }
  //left part is sorted
  else if(v[lo] <= v[mid])
  {
    if(x>=v[lo] && x<=v[mid])
    {
      hi=mid-1;
    }
    else
    {
      lo=mid+1;
    }
  }
  else
  {
    if(x>=v[mid] && x<=v[hi])
    {
      lo=mid+1;
    }
    else
    {
      hi=mid-1;
    }
  }
}
  if(found==true)
  {
    cout << ans << endl;
  }
  else
  {
    cout << -1 << endl;
  }
  return 0;
}






    

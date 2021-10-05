#include<iostream>
#include<algorithm>
#include<iomanip>
 
using namespace std;
 
int main()
{
    long long l, *a, max1=0;
    int n,i;
    cin>>n>>l;
    a=new long long[n];
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	sort(a, a+n);
	for(i=0;i<n-1;i++)
    {
    	max1=max(max1,a[i+1]-a[i]);
	}
	max1=max(max1,(a[0]-0)*2);
	max1=max(max1,(l-a[n-1])*2);
	cout<<fixed<<setprecision(10)<<(float)max1/2<<endl;
    return 0;
}

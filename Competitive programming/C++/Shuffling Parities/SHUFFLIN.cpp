#include <iostream>
using namespace std;

int main() {
	int t,i,j,k;;
	cin>>t;
	while(t--)
	{
	    int n,c=0;
	    cin>>n;
	    int A[n];
	    for(i=1;i<=n;i++)
	    {
	        cin>>A[i];
	    }
	    for(i=1;i<=n;i++)
	    {
	        if(i%2==1)
	        {
	            for(j=1;j<=n;j++)
	            {
	                if(A[j]>0)
	                {
	                    if(A[j]%2==0)
	                    {
	                        c++;
	                        A[j]=0;
	                        break;
	                    }
	                }
	            }
	        }
	        else if(i%2==0)
	        {
	            for(j=1;j<=n;j++)
	            {
	                if(A[j]>0)
	                {
	                    if(A[j]%2==1)
	                    {
	                        c++;
	                        A[j]=0;
	                        break;
	                    }
	                }
	            }
	        }
	        
	    }
	    cout<<c<<"\n";
	}
	return 0;
}

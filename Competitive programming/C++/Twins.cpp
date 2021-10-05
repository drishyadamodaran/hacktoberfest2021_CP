#include<iostream>
 
using namespace std;
 
 
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
 
 
int main()
{
    int n=0, *a, i,c=0,tsum=0,j,sum=0;
    cin>>n;
    a=new int[n];
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    	tsum+=a[i];
	}
 
    insertionSort(a, n);
 
    for(i=n-1;i>=0;i--)
    {
    	sum=0;
    	c++;
	    for(j=n-1;j>=i;j--)
	    {
	    	sum+=a[j];
		}
    	if((2*sum)>tsum)
    	{
    		cout<<c<<endl;
    		return 0;
		}
	}
	return 0;
}

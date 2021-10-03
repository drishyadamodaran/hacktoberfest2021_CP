#include<iostream>
using namespace std;
int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;
    int temp[n];
    int j = 0;
    for (int i=0; i<n-1; i++)
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];

    temp[j++] = arr[n-1];
    for (int i=0; i<j; i++)
        arr[i] = temp[i];
 
    //Returning updated number of elements
    return j;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    cin>>arr[i];

    n = removeDuplicates(arr, n);

    //Displaying updated array
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";

    return 0;
}

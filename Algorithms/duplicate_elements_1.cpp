#include<iostream>
using namespace std;

int main()
{
    int n, i,j ,Ld=0;
    cout << "How many numbers? ";
    cin >> n;
    int A[n];
    cout << "Enter the numbers : ";
    for (i = 0; i < n; i++)
        cin >> A[i];
  
    for (int i = 0; i < n; i++)
    {
        if (A[i]==A[i+1] && A[i]!=Ld)
        {
            cout<<"Duplicates element are "<<A[i]<<endl;
            Ld=A[i];
        }
        
    }

    for (int i = 0; i < n-1; i++)
    {
        if (A[i]==A[i+1])
        {
            j=i+1;
            while (A[j]==A[i])j++;                
            cout<<A[i]<<" is appearing "<<j-i<<" times."<<endl;
            i=j-1;
            
        }
        
    }
    
    return 0;
}

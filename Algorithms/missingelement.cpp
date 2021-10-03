#include<iostream>
using namespace std;

int Missing_Elements_1(int A[])
{
   int diff,l=A[0],i;
   diff=l-0;
    for (int i = 0; i < 10; i++)
    {
        if (A[i]-i!=diff)
        {
            while (diff<A[i]-i)
            {
                cout<<"Missing number is "<<i+diff<<endl;
                diff++;
            }
            
        }
        
    }
    return i+diff;

}
int main()
{
    int A[10]={6,7,8,9,11,12,15,16,17,18};
   Missing_Elements_1(A);
    
    return 0;
}


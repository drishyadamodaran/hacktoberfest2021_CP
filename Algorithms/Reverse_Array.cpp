#include <iostream>
using namespace std;

void display(int A[],int n){
    for(int i=0; i<n; i++)
        cout << A[i] << " ";
}

void reverse(int A[], int n){
    
    for (int i=0; i<n/2; i++)
    {
        int temp = A[i];
        A[i] = A[n-1-i];
        A[n-1-i] = temp;    
    }
}

int main(){

    int n;

    cout<<"Enter length of the array: ";
    cin>>n;
    int A[n];

    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    reverse(A,n);
    display(A,n);

    return 0;
}

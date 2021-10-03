#include <iostream>
using namespace std;

int* merge(int A[], int m, int B[], int n) {

    int* C = new int[m+n];

    int i=0, j=0, k=0;

    while (i<m && j<n) {

        if (A[i] < B[j]) {
            C[k++] = A[i++];
        }
        else{
            C[k++] = B[j++];
        }
    }

    for (; i<m; i++) {
        C[k++] = A[i];
    }

    for (; j<n; j++) {
        C[k++] = B[j];
    }
    return C;

    delete []C;
}

void display(int A[],int n){
    for(int i=0; i<n; i++)
        cout << A[i] << " ";
}

int main(){

    int n,m;

    cout<<"Enter length of the array1: ";
    cin>>n;

    cout<<"Enter length of the array2: ";
    cin>>m;
    int A[n];
    int B[m];

    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    for(int i=0; i<m; i++){
        cin>>B[i];
    }

    int* C = merge(A,n,B,m);
    display(C,m+n);

    return 0;
}

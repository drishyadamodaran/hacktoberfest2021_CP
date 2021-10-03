#include <iostream>
using namespace std;

void display(int A[],int n){
    for(int i=0; i<n; i++)
        cout << A[i] << " ";
}

int linearsearch(int A[], int key, int m){
    for(int i=0; i<m; i++){
        if (A[i]==key) {return i;}
    }
    return -1;
}


int main(){

    int n,m;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter length of the array: ";
    cin>>m;
    int A[n];

    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    //Example function call for linear search
    cout<<linearsearch(A,4,n);

    return 0;

}

#include <iostream>
using namespace std;

void display(int A[],int n){
    for(int i=0; i<n; i++)
        cout << A[i] << " ";
}

void arr_delete(int A[], int index, int length){

    for(int i= index; i<length; i++){
        A[i] = A[i+1];
    }
}

int main(){

    int n,m;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter length of the array: ";
    cin>>m;
    int A[n];

    for(int i=0; i<m; i++){
        cin>>A[i];
    }
    
    //Example function call to delete 2nd element
    arr_delete(A,2,m);

    display(A,m-1);

    return 0;

}

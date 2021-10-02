#include <iostream>
#define MAX 50

using namespace std;

void swap1(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void selectionSort(int arr[], int n){
	int minindex;
	for (int i = 0; i < n-1; i++){
		minindex = i;
		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[minindex]){
				minindex = j;
			}
		}
		if(minindex != i){
			swap1(arr[i], arr[minindex]);
		}
	}
}

void print1(int arr[], int n){
	cout<<"After Sorting:"<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<< " ";
}

int main(){
	int arr[MAX], n;
	cout<<"************SELECTION SORT************"<<endl;
    cout<<"Enter number of elements: ";
    cin>> n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting: "<<endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    selectionSort(arr, n);
    print1(arr, n);
    return 0;
}

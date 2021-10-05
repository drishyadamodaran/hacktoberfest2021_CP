#include <bits/stdc++.h>
using namespace std;

int countStepsToOne(int n)
{
    int arr[n+1];
    for(int i = 0; i<n+1;i++){
        arr[i]=-1;
    }
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for(int i = 4; i<n+1;i++){
        int x1,x2,x3;
        x1 = INT_MAX;
        x2 =x1;
        x3 =x1;
        if(i%3==0){
            if(arr[i/3] !=-1){
                x3 = arr[i/3]+1;
            }
        }
        if(i%2==0){
            if(arr[i/2] !=-1){
                x2 = arr[i/2]+1;
            }
        }
        if(arr[i-1] !=-1){
            x1 = arr[i-1] + 1;
        };
        arr[i] = min(min(x1,x2),x3);
    }
    return arr[n];
}

int main()
{
	int n;
	cin >> n;
	cout << countStepsToOne(n);
}
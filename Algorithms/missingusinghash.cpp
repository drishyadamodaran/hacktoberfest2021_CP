#include <iostream>
using namespace std;

int max(int A[], int n)
{
    int m = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > m)
            m = A[i];
    }
    return m;
}
int main()
{
    int n, i;
    cout << "How many numbers? ";
    cin >> n;
    int A[n];
    cout << "Enter the numbers : ";
    for (i = 0; i < n; i++)
        cin >> A[i];
    cout << "The numbers are : ";
    for (i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
    int l = A[0];
    int h = max(A, n) ;
    int *H = new int[h];
    for (i = 0; i < h; i++)
        H[i] = 0;

    cout << "The hash table is : ";
    for (i = 0; i < h; i++)
        cout << H[i] << " ";

    for (i = 0; i < n; i++)
        H[A[i]]++;
    cout << endl
         << "Missing Elements" << endl;
    for (i = 1; i <= h; i++)
    {
        if (H[i] == 0)
            cout << i << " ";
    }
    cout << endl;
}

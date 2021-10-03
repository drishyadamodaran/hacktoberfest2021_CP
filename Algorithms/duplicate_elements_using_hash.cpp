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

    int h = max(A, n) + 1;
    int *H = new int[h];
    for (i = 0; i < h; i++)
        H[i] = 0;
    for (i = 0; i < n; i++)
        H[A[i]]++;
    for (i = 0; i <= h; i++)
    {
        if (H[i] > 1)
            cout << i << " occurs " << H[i] << " times" << endl;
    }

    return 0;
}
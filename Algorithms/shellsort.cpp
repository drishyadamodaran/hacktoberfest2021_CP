using namespace std;
#include <iostream>

void ShellSort(int sortedArray[], int size)
{
    for (int t = size / 2; t > 0; t /= 2)
    {
        for (int i = t; i < size; i++)
        {
            int temp = sortedArray[i];
            int j;
            for (j = i; j >= t && sortedArray[j - t] > temp; j -= t)
            {
                sortedArray[j] = sortedArray[j - t];
            }
            sortedArray[j] = temp;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    cout << "Enter the  elements in the array \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n";

    cout << "Original Array ";
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\b\b";
    cout << "]";

    cout << "\n";
    ShellSort(arr, n);

    cout << "Array after Shell Sort is ";
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\b\b";
    cout << "]";
    cout << endl;

    cout << "\n";

    return 0;
}
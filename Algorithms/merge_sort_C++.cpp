// C++ program for Merge Sort
#include <iostream>
#include<vector>
using namespace std;
  
// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(vector<int>& array, int const left, int const mid, int const right)
{
    auto const subArr1 = mid - left + 1;
    auto const subArr2 = right - mid;
  
    // Create temp arrays
    auto *leftArray = new int[subArr1],
         *rightArray = new int[subArr2];
  
    // Copying data to temp arrays
    for (auto i = 0; i < subArr1; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArr2; j++)
        rightArray[j] = array[mid + 1 + j];
  
    auto idxSubArr1 = 0, // Initial index of first sub-array
        idxSubArr2 = 0; // Initial index of second sub-array
    int idxMrgArr = left; // Initial index of merged array
  
    // Merge the temp arrays back into array[left..right]
    while (idxSubArr1 < subArr1 && idxSubArr2 < subArr2) {
        if (leftArray[idxSubArr1] <= rightArray[idxSubArr2]) {
            array[idxMrgArr] = leftArray[idxSubArr1];
            idxSubArr1++;
        }
        else {
            array[idxMrgArr] = rightArray[idxSubArr2];
            idxSubArr2++;
        }
        idxMrgArr++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (idxSubArr1 < subArr1) {
        array[idxMrgArr] = leftArray[idxSubArr1];
        idxSubArr1++;
        idxMrgArr++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (idxSubArr2 < subArr2) {
        array[idxMrgArr] = rightArray[idxSubArr2];
        idxSubArr2++;
        idxMrgArr++;
    }
}
  
// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(vector<int>& array, int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
  
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
  
// Function to print an array
void printArray(vector<int>& A, int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}
  
// Driver code
int main()
{
    int n, input;
    cout<<"enter no. of array elements:";
    cin>> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin>> input;
        arr.push_back(input);
    }
    

    cout << "Input array is: ";
    printArray(arr, n);
  
    mergeSort(arr, 0, n - 1);
  
    cout << "\nSorted array is: ";
    printArray(arr, n);
    return 0;
}

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
   int n1 = nums1.size();
   int n2 = nums2.size();

   if (n2 < n1) return findMedianSortedArrays(nums2, nums1);

   int lo = 0;
   int hi = n1;

   while (lo<=hi) {
       int partitionX = (lo+hi)/2;
       int partitionY = (n1+n2+1)/2 - partitionX;

       int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
       int minRightX = (partitionX == n1) ? INT_MAX : nums1[partitionX];

       int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
       int minRightY = (partitionY == n2) ? INT_MAX : nums2[partitionY];

       if (maxLeftX <= minRightY and maxLeftY <= minRightX) {      // Correct Partition
           if ((n1 + n2) % 2 == 0)     // Even
               return double(max(maxLeftX, maxLeftY) + min(minRightX, minRightY))/2;
           else
               return double(max(maxLeftX, maxLeftY));
       }
       else if (maxLeftX > minRightY) hi = partitionX - 1;
       else lo = partitionX + 1;
   }
   return -1;
}

int main() {

    int n1, n2;
    cin >> n1 >> n2;

    vector<int> nums1(n1), nums2(n2);

    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    cout << "Median = " << findMedianSortedArrays(nums1, nums2);

    return 0;
}

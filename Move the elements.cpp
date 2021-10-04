/*
Sample Input

10
-6 7 13 10 -8 15 5 -9 2 -1
Sample Output

7
13
10
15
5
2
-6
-8
-9
-1
*/


void moveElements(int arr[], int n){ 
   int key,j;
   for (int i = 0; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j>=0 && arr[j]<0 && key>=0)
       {
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = key;
   }
}

//srishti1302
import java.util.*;
public class MergeSort 
{ 
    void merge(int arr[], int l, int m, int r) 
    {    
        int n1 = m - l + 1; 
        int n2 = r - m; 
        int L[] = new int [n1]; 
        int R[] = new int [n2]; 
        for (int i=0; i<n1; ++i) 
            L[i] = arr[l + i]; 
        for (int j=0; j<n2; ++j) 
            R[j] = arr[m + 1+ j]; 
        int i = 0, j = 0; 
        int k = l; 
        while (i < n1 && j < n2) 
        { 
            if (L[i] <= R[j]) 
            { 
                arr[k] = L[i]; 
                i++; 
            } 
            else
            { 
                arr[k] = R[j]; 
                j++; 
            } 
            k++; 
        } 
        while (i < n1) 
        { 
            arr[k] = L[i]; 
            i++; 
            k++; 
        } 
        while (j < n2) 
        { 
            arr[k] = R[j]; 
            j++; 
            k++; 
        } 
    } 
  
    void sort(int arr[], int l, int r) 
    { 
        if (l < r) 
        { 
           
            int m = (l+r)/2; 
            sort(arr, l, m); 
            sort(arr , m+1, r); 
            merge(arr, l, m, r); 
        } 
    } 
  
    static void printArray(int arr[]) 
    { 
        int n = arr.length; 
        for (int i=0; i<n; ++i) 
            System.out.print(arr[i] + " "); 
        System.out.println(); 
    } 
  
    public static void main(String args[]) 
    { 
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size:");
        int size = sc.nextInt();

        int arr[] = new int[size];
        System.out.println("Enter the elements:");
        for(int i = 0; i < size; i++)
        {
        	arr[i]=sc.nextInt();
        } 
  
        System.out.println("Given Array"); 
        printArray(arr); 
  
        MergeSort ob = new MergeSort(); 
        long start =System.nanoTime();
        ob.sort(arr, 0, arr.length-1);
        long end=System.nanoTime();
        System.out.print("Execution Time ");
        System.out.println(end-start);
        
  
        System.out.println("\nSorted array"); 
        printArray(arr);
        sc.close();
    } 
} 

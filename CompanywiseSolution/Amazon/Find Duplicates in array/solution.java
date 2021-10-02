import java.util.ArrayList;
import java.util.Scanner;
import java.io.*;
class solution {
    public static ArrayList<Integer> duplicates(int arr[], int n) {
        // code here
        ArrayList<Integer> ar=new ArrayList<>();
        for (int i = 0; i <arr.length; i++) {
            arr[arr[i] % arr.length]
                = arr[arr[i] % arr.length]
                  + arr.length;
        }
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] >= arr.length * 2) {
                ar.add(i);
            }
        }
        if(ar.isEmpty())
        ar.add(-1);
        return ar;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length of array arr");
        int n=sc.nextInt();
        System.out.println("Enter an array");
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        ArrayList<Integer> ans=duplicates(arr,n);
        for(Integer val:ans)
        System.out.print(val+" ");
        System.out.println();
    }
}
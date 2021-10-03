import java.util.*;
public class MaxSecondMax {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size: ");
        int N = sc.nextInt();
        int [] TempArr = new int [N];
        for(int j =0 ; j< N ; j++){
            System.out.println("Enter the Number: ");
            TempArr[j] = sc.nextInt();
        }

        System.out.println(Max(TempArr , N));
        sc.close();
    }

    public static ArrayList<Integer> Max( int arr[] , int size)
    {
        int counter = 0;
        int temp =-1;
        for(int i = 0 ; i<size ; i++){
            if(arr[i]>counter){
                counter = arr[i];
            }
        }
        
        for(int i =0 ; i<size ; i++){
            
            if(temp<arr[i] && arr[i]<counter){
                temp = arr[i];
            }
        }    
            
            ArrayList<Integer> al = new ArrayList<Integer>();
            al.add(counter);
            al.add(temp);
            
            return al;//code here.
    }
}
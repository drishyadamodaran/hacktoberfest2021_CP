import java.util.Scanner;
public class Equilibrium {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of an array :");
        int N = sc.nextInt();
        long [] temp = new long[N];
        System.out.println("Enter the number: ");
        for(int i =0 ; i<N ; i++){
         
            temp[i] = sc.nextInt();  
        }
         System.out.println(Point(temp , N));
        sc.close();
    }

    public static int Point(long arr[], int n) {
		long total = 0;
		for (int i = 0; i < n; i++) {
			total += arr[i];
		}
		if (total == 0) {
			return 1;
		} else if (arr.length == 1) {
			return 1;
		}
		long sumtilli = arr[0];
		long sumtilliminus1 = 0;
		for (int i = 1; i < n; i++) {
			sumtilli += arr[i];
			sumtilliminus1 += arr[i - 1];
			if (sumtilliminus1 == total - sumtilli) {
				return i + 1;
			}
		}
		return -1;
	}


}
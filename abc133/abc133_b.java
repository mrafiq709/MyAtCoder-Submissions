import java.util.*;

public class Main {
	static Scanner sc = new java.util.Scanner(System.in);

	private static void sol()
	{
		int n = sc.nextInt();
		int d = sc.nextInt();
		
		int[][] arr = new int[n][d];
				
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < d; j++) {
				arr[i][j] = sc.nextInt();
			}
		}
		
		int cnt = 0;
	    for (int i = 0; i < n; i++) {
	        for (int j = i + 1; j < n; j++) {  // All unique pairs (i < j)
	            double root = 0;
	            for (int k = 0; k < d; k++) {
	                root += Math.pow(arr[i][k] - arr[j][k], 2);
	            }
	            root = Math.sqrt(root);
	            if (root % 1 == 0) { // check if distance is integer
	                cnt++;
	            }
	        }
	    }
		System.out.println(cnt);
	}

	public static void main(String[] args) {
		sol();
	}
}
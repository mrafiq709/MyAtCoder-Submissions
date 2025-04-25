import java.util.*;

public class Main {
	
	public static void sol(int[] arr, int n) {
		for(int i = 0; i < n - 1; i++) {
			if(arr[i] != arr[i+1]) {
				System.out.println("No");
				return;
			}
		}
		System.out.println("Yes");
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int[] arr = new int[101];
		for(int i = 0; i < n; i++) {
			arr[i] = s.nextInt();
		}
		
		sol(arr, n);
	}

}

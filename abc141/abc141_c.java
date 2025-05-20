import java.util.*;

public class Main {
	static Scanner sc = new java.util.Scanner(System.in);
	
	private static void sol() {
		int n = sc.nextInt();
		int k = sc.nextInt();
		int q = sc.nextInt();
		
		int[] votes = new int[n + 1];
		
		for (int i = 0; i < q; i++) {
            int v = sc.nextInt();
            votes[v]++;
        }
		
		for (int i = 1; i <= n; i++) {
            int score = votes[i] + k - q;
            System.out.println(score > 0 ? "Yes" : "No");
        }
	}
	
    public static void main(String[] args) {
    	sol();
    }
}
import java.util.*;

public class Main {
	private static int sol(int n, int[] nums) {
        int g1 = 0, g2 = 0, ans = Integer.MAX_VALUE;
        for(int i = 0; i < 1 << n; i++){
            for(int j = 0; j < n; j++){
//				System.out.println("  " + Integer.toBinaryString(i));
//				System.out.println("& " + Integer.toBinaryString(1 << j));
//				System.out.println("-----------------");
//				System.out.println("  " + Integer.toBinaryString((i & (1 << j))));
//				System.out.println();
                if((i & (1 << j)) != 0) g1 += nums[j];
                else g2 += nums[j];
            }
            /*
			 * 111
			 * 011
			 * 101
			 * 001
			 * 110
			 * 010
			 * 100
			 * 000
			 */

            ans = Math.min(ans, Math.max(g1, g2));
            g1 = 0; g2 = 0;
        }
        
        return ans;
	}

	public static void main(String[] args) {
		Scanner sc = new java.util.Scanner(System.in);
		int n = sc.nextInt();
		int[] nums = new int[n];
		
		for(int i = 0; i < n; i++) {
			nums[i] = sc.nextInt();
		}
		
		System.out.println(sol(n, nums));
	}
}
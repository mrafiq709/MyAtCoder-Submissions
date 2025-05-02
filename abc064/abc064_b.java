import java.util.*;

public class Main {
	private static void sol(int n, int[] nums) {
        long cnt = 0;
        Arrays.sort(nums);
        for (int i = 0; i < n - 1; i++) {
            cnt += nums[i+1] - nums[i];
        }

        System.out.println(cnt);
	}

	public static void main(String[] args) {
		Scanner sc = new java.util.Scanner(System.in);
		int n = sc.nextInt();
		int[] nums = new int[n];
		
		for(int i = 0; i < n; i++) {
			nums[i] = sc.nextInt();
		}
		
		sol(n, nums);
	}
}
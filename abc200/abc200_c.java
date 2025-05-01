import java.util.*;

public class Main {
	private static void sol(int n, int[] nums) {
		int[] modCount = new int[200];
        for (int i = 0; i < n; i++) {
            modCount[nums[i] % 200]++;
        }

        long cnt = 0;
        for (int c : modCount) {
            if (c >= 2) {
                cnt += (long) c * (c - 1) / 2;
            }
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
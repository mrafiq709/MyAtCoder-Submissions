import java.util.*;

public class Main {
	static Scanner sc = new java.util.Scanner(System.in);

	private static int sol()
	{
		Map<Integer, Integer> mp = new HashMap<Integer, Integer>();
		int n = sc.nextInt();
		int cnt = 1;
		
		while(true) {
//			System.out.print(n + " ");
			if(mp.containsKey(n)) {
				return cnt;
			} else {
				mp.put(n, 1);
				cnt++;
			}
			if(n%2 == 0) {
				n /= 2;
			} else {
				n = 3 * n + 1;
			}
		}
	}

	public static void main(String[] args) {
		System.out.println(sol());
	}
}
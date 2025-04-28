import java.util.*;

public class Main {
	
	public static void sol(int[] arr) {
		int cnt = 0;
		Map<Integer, Integer> map = new HashMap<>();
		for(int i = 0; i < 5; i++) {
			map.put(arr[i], 1);
		}
		
		System.out.println(map.size());
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int[] arr = new int[5];
		for(int i = 0; i < 5; i++) {
			arr[i] = s.nextInt();
		}
		
		sol(arr);
	}

}

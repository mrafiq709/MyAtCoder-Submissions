import java.util.*;

public class Main {
	static Scanner sc = new java.util.Scanner(System.in);
	static Map<String, Integer> mp = new HashMap<>();
	static String[] str;

	private static void sol()
	{
		int n = sc.nextInt();
		str = new String[n];
		sc.nextLine();
		for(int i = 0; i < n; i++) {
			str[i] = sc.nextLine();
		}
		
		for(int i = 0; i < n; i++) {
			if(!mp.containsKey(str[i])) {
				System.out.println(str[i]);
				mp.put(str[i], 1);
			} else {
				System.out.println(str[i] + "(" + mp.get(str[i]) + ")");
				mp.put(str[i], mp.get(str[i]) + 1);
			}
		}
	}

	public static void main(String[] args) {
		sol();
	}
}
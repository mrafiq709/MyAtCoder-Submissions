import java.util.*;

public class Main {
	static Scanner sc = new java.util.Scanner(System.in);

	private static void sol()
	{
		int L = sc.nextInt();
		int R = sc.nextInt();
		if(L == R) {
			System.out.println("Invalid");
		} else if(L == 1) {
			System.out.println("Yes");
		} else {
			System.out.println("No");
		}
	}

	public static void main(String[] args) {
		sol();
	}
}